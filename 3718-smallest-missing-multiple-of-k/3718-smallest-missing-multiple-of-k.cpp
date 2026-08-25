class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        bool present[201]={};
        for(int num:nums){
            present[num]=true;
        }
        int ans = k;
        while(present[ans]){
            ans+=k;
        }
        return ans;
    }
};