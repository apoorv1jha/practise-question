class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>count(26,0);
        int n = s.size();
        int left =0;
        int maxlength = 0;
        for(int right =0;right<n;right++){
            count[s[right]-'a']++;
            
            while(count[s[right]-'a']>2){
                count[s[left]-'a']--;
                left++;
            }
            maxlength = max(maxlength,right-left+1);
        }
        return maxlength;
    }
};