class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
          if(nums.size()<=2){
            return -1;
          }
        }
        return nums[1];
    }
};