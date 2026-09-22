class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        
        int maxr = -1;
        for(int i=n-1;i>=0;i--){
            int temp = arr[i];
            arr[i]= maxr;
            maxr=max(arr[i],temp);   
        }
        return arr;
    }
};