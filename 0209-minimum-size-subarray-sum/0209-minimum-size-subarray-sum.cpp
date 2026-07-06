class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        
        int sum =0;
        int ans = INT_MAX;
        for(int right=0;right<n;right++){
            sum+=nums[right];
        
        while(sum>=target){
            ans =min(ans,right-left+1);
            sum-=nums[left];
            left++;
           
        }
        }
    // pehle ye check krna hai ki hume min subarray length mila ki nhi ,agr nhi mila toh ans == intmax me return 0 kr do
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};