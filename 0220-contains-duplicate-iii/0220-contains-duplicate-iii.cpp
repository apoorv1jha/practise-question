class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<int>st;
        st.insert(nums.begin(),nums.end());
        if(st.size()==nums.size() && valueDiff ==0) return false;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n&& j<=i+indexDiff;j++){
                if(i!=j && abs(i-j)<=indexDiff && abs((long long)nums[i]-(long long)nums[j])<=valueDiff){
                    return true;
                }
            }
        }
        return false;
    }
};