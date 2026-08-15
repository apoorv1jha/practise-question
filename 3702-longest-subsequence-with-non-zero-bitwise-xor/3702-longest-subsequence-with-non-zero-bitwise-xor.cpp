class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int totalxor= 0;
        int zerocount = 0;
        for(int x:nums){
            totalxor = totalxor^x;
            if(x==0){
                zerocount ++;
            }
        }
        if(totalxor!=0){
            return n;
        }else if(zerocount==n){
            return 0;
        }else{
            return n-1;
        }
    }
};