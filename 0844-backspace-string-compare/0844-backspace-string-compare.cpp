class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans;
        for(char ch: s){
            if(ch=='#'){
                if(!ans.empty()){
                    ans.pop_back();
                }
            }else{
                ans.push_back(ch);
            }
        }
        string res;
        for(char ch: t){
            if(ch=='#'){
                if(!res.empty()){
                    res.pop_back();
                }
            }else{
                res.push_back(ch);
            }
        }
        return ans==res;
    }
};