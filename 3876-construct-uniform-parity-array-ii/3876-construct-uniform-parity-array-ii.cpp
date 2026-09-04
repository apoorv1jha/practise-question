class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX;
       for(int x: nums1){
        if(x%2!=0){
            mn = min(mn,x);
        }
       }
       for(int x:nums1){
        if(x%2==0 && x<mn && mn!=INT_MAX){
            return false;
        }
       }
       return true;
    }
};