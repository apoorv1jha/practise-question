class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        int prefixgcd[n];
        int mx = nums[0];
        long long ans = 0;
        for(int i=0;i<n;i++){
            mx = max(nums[i],mx);
            prefixgcd[i]= __gcd(nums[i],mx);
        }
        sort(prefixgcd,prefixgcd+n);
        int left = 0;
        int right = n-1;
        while(left<right){
            ans+= __gcd(prefixgcd[left],prefixgcd[right]);
            left++;
            right--;
        }
    return ans;
    }
};