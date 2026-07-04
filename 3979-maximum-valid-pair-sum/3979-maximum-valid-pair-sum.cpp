class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=nums[0];
        int mx =INT_MIN;
        for(int j=k;j<n;j++){
            sum=max(sum,nums[j-k]);
            mx = max(mx,sum+nums[j]);
        }
        return mx;
    }
    
};