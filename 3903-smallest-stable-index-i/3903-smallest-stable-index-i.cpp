class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int mn = nums[i];
            int mx = nums[i];
            for(int j=0;j<i;j++){
                mx = max(mx,nums[j]);
            }
            for(int j=i+1;j<n;j++){
                mn = min(mn,nums[j]);
            }
            if(mx-mn<=k){
                return i;
            }
        }
        return -1;
    }
};