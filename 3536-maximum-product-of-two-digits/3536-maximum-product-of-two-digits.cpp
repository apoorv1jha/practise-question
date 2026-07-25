class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;
        int x =1;
        int mx = 0;
        while(n>0){
             int digit = n%10;
            ans.push_back(digit);
             n/=10;
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                mx= max(mx,ans[i]*ans[j]);
            }
        }
        return mx;
    }
};