class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int left =0;
        int right = n-1;
        if(n<3) return false;
        
            while(left<n && arr[left]<arr[left+1]){
                left++;
            }
            while(right-1>=0 && arr[right-1]>arr[right]){
                right--;
            }
        
        return left>0 && right<n-1 && left==right;
    }
};