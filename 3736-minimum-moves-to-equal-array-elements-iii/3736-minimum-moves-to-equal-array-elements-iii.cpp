class Solution {
public:
    int minMoves(vector<int>& nums) {
       int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int count = 0;
        for(int i=0;i<n;i++){
            count+=abs(nums[i]-maxi);
        }
        return count;
    } 
    
};