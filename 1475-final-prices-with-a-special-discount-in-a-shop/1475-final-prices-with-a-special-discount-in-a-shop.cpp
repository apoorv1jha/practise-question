class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
        bool found = false;
            for(int j=i+1;j<n;j++){
                if(prices[j]<=prices[i] && j>i){
                    ans.push_back(prices[i]-prices[j]);
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};