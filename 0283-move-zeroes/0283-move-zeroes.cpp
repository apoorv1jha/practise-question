class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<ans.size();i++){
        //     nums[i]=ans[i];
        // }
        // for(int i=ans.size();i<n;i++){
        //     nums[i]=0;
        // }
        int x =0;
        int y =0;
        for(int y=0;y<n;y++){
            if(nums[y]!=0){
                swap(nums[x],nums[y]);
                x++;
            }
        }
    }
};