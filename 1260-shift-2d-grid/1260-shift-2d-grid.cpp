class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int len = m*n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                nums.push_back(grid[i][j]);
            }
        }
        k %=len;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        vector<vector<int>>result(n,vector<int>(m));
        int idx = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                result[i][j]=nums[idx++];
            }
        }
        return result;
    }
};