class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long mx =0 ;
        long strength = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long g = __gcd(nums[i],nums[j]);
                strength = (1LL * nums[i] * nums[j]) / (g * g);
                mx = max(mx, strength);
            }
        }
        return mx;
    }
};