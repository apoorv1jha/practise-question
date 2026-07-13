class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>ans;
        
        
        for(int i=0;i<n;i++){
            bool found = false;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    found = true;
                ans.push_back(nums1[i]);
                nums2[j]=INT_MIN;
                    break;
                }
            }
            
        }
        return ans;
    }
};