class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=('z'-s[i]+1)*(i+1);
        }
        return ans;
    }
};