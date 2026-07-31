class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(char &c:word){
            freq[c-'a']++;
        }
        sort(freq.rbegin(),freq.rend());
        int n = word.length();
        int ans =0;
        for(int i=0;i<26;i++){
            if(freq[i]==0){
                break;
            }
            ans+=(i/8+1)*freq[i];
        }
        return ans;
    }
};