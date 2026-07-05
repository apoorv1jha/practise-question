class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        // int left =0;
        // int right = n-1;
        // while(left<right){
        //     int mid = left + (right-left)/2;
        //     if(nums[mid]>nums[mid+1]){
        //         right= mid;
        //     }else if(nums[mid-1]<nums[mid]){
        //        left=mid+1;
        //     }
        // }
        // return left;
        int m= 0;
        int mx = nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                mx = nums[i];
                m=i;
            }
        }
        return m;
    }
};