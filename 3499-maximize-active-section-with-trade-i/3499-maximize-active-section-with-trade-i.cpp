class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();
        vector<int>inactive;
        int i=0;
        int active = count(begin(s),end(s),'1');
        while(i<n){
            if(s[i]=='0'){
                int start = i;
                while(i<n && s[i]=='0'){
                    i++;
                }
                    inactive.push_back(i-start);
            }else{
                i++;
            }
        }
        int mx =0;
        for(int i=1;i<inactive.size();i++){
            mx = max(mx,inactive[i]+inactive[i-1]);
        }
        return mx+active;
    }
};