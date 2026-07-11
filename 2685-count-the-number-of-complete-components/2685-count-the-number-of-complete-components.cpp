class Solution {
public:
    vector<vector<int>> adj;
    vector<int> vis;
    int nodes;
    int degreeSum;

    void dfs(int u) {
        vis[u] = 1;
        nodes++;
        degreeSum += adj[u].size();

        for (int v : adj[u]) {
            if (!vis[v])
                dfs(v);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        adj.assign(n, {});
        vis.assign(n, 0);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                nodes = 0;
                degreeSum = 0;

                dfs(i);

                int edgeCount = degreeSum / 2;

                if (edgeCount == nodes * (nodes - 1) / 2)
                    ans++;
            }
        }

        return ans;
    }
};