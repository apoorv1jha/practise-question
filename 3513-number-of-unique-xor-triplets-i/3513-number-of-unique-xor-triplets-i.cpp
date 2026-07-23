class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.size()==1) return 1;
        if(nums.size()==2) return 2;
        int ans = 1;
        while(ans<=nums.size()){
            ans*=2;
        }
        return ans;
    }
};