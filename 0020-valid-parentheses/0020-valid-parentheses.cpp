class Solution {
public:
    bool isValid(string s) {
        int x = s.length();
        int top =-1;
        for(int i=0;i<x;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                top++;
                s[top]=s[i];
            }else if(s[i]==')'|| s[i]=='}'||s[i]==']'){
                if(top==-1){
                    return false;
                }
                if((s[i]==')' && s[top]!='(') ||
                 (s[i]=='}' &&s[top]!='{') ||
                  (s[i]==']'&&s[top]!='[')){
                    return false;
                }
                top--;
            }
        }
        return top==-1;
    }
};