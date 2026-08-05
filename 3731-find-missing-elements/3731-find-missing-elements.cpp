class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int mn =  nums.front();
        int mx = nums.back();
        for(int i= mn+1;i<mx;i++){
            bool found = false;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(i);
            }
        }
        return ans;
    }
};