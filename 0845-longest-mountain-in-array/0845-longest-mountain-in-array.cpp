class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int mx = 0;
        if(arr.size()<3){
            return 0;
        }
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int left =i,right =i;

                while(left>0&&arr[left]>arr[left-1]){
                    left--;
                }
                while(right<n-1 && arr[right]>arr[right+1]){
                 right++;
                }
                int length = right-left+1;
                mx=max(length,mx);
            }
        }
       return mx;
    }
};