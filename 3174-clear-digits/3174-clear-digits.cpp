class Solution {
public:
    string clearDigits(string s) {
        int n = s.length();
        vector<char>ans;
        // ans.push_back(s);
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }
        return string(ans.begin(),ans.end());
    }
};