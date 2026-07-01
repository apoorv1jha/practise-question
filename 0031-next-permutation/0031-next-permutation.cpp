class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int idx = -1;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                idx = i-1;
                break;
            }
        }

        if(idx !=-1){
        int Swap = idx;
        for(int i=n-1;i>=idx+1;i--){
            if(nums[i]>nums[idx]){
                Swap = i;
                break;
            }
        }
        swap(nums[idx],nums[Swap]);
        }
        sort(nums.begin()+idx+1,nums.end());
    }
};