class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        for(int i=0;i<n;i++){
            bool found = true;
            for(int j=0;j<n;j++){
                if(s[i]==s[j] &&i!=j){
                     found = false;
                    break;
                }
            }
            if(found){
                return i;
            }
        }
        return -1;
    }
};