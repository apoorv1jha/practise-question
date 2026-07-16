class Solution {
public:
    vector<vector<int>>ans;
    void solve(int index,vector<int>&nums){
        if(index==nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solve(index+1,nums);
            swap(nums[index],nums[i]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        solve(0,nums);
        return ans;
    }
};