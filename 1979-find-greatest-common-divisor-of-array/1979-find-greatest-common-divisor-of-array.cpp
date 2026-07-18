class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
       sort(nums.begin(),nums.end());
       
       return  __gcd(nums[0],nums[n-1]); 
       
    // int mn = nums[0];
    // int mx =nums[n-1];
    // return ans 
    }
};