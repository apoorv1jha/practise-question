class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        // for(int i=0;i<n;i++){
        //     bool found = true;
        //     for(int j=0;j<n;j++){
        //         if(s[i]==s[j] &&i!=j){
        //              found = false;
        //             break;
        //         }
        //     }
        //     if(found){
        //         return i;
        //     }
        // }
        // return -1;
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        for(int i=0;i<n;i++){
            if(freq[s[i]-'a']==1){
            return i;
        }
        }
        return -1;
    }
};