class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        // int mx =0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         mx = max((mx,nums[i]-1)*(nums[j]-1));
        //     }
        // }
        // return mx;
        // sort(nums.begin(),nums.end());
        // return (nums[n-2]-1)*(nums[n-1]-1);

        int mx =0;
        int smx =0;
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                smx = mx;
                mx = nums[i];
            }else{
                smx = max(smx,nums[i]);
            }
        }
        return (mx-1)*(smx-1);
    }
};