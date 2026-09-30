class Solution {
public:
    int maxDepth(string s) {
        
        int ans = 0;
        int mx = 0;
        for(char ch:s){
            if (ch == '('){
                ans++;
            }else if(ch == ')'){
                ans--;
            }
            mx = max(mx,ans);
        }
    return mx;
    }
};