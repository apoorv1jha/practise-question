class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<pair<int,int>> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(), arr.end());

        vector<int> pos(n);
        for (int i = 0; i < n; i++)
        {
            pos[arr[i].second] = i;
        }

        int log=1;
        while ((1 << log) < n) 
        {
            log++;
        }

        vector<vector<int>>up(n,vector<int>(log));
        int r = 0;
        for (int l = 0; l < n; l++) 
        {
            if (r < l)
            {
                r = l; 
            }                      
            while ((r + 1 < n) && arr[r + 1].first - arr[l].first <= maxDiff) 
            {
                r++;
            }
            up[l][0] = r;
        }

        for (int j = 1; j < log; j++) 
        {
            for (int i = 0; i < n; i++) 
            {
                up[i][j] = up[up[i][j - 1]][j - 1];
            }
        }


        vector<int>ans;
        for(auto it: queries) {
            int src = pos[it[0]];
            int dest = pos[it[1]];

            if(src > dest) 
            {
                swap(src,dest);
            }

            if(src==dest) 
            {
                ans.push_back(0);
                continue;
            }

            int curr = src;
            int hops = 0;
            for (int j = log - 1; j >= 0; j--) {
                if (up[curr][j] < dest) 
                {
                    curr = up[curr][j];
                    hops += (1<<j);
                }
            }
            if (up[curr][0] >= dest) 
            {
                ans.push_back(hops + 1);
            } 
            else 
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};