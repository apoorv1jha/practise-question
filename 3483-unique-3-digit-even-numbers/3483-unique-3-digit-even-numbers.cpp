class Solution {
public:
    int totalNumbers(vector<int>& digits) {
      int n = digits.size();
      int count =0;
      set<int>x;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i==j || j==k || k==i){
                    continue;
                }
                if(digits[i]==0){
                    continue;
                }
                if(digits[k]%2!=0){
                    continue;
                }
                int y = digits[i]*100+digits[j]*10+digits[k]*1;
                x.insert(y);
            }
        }
      }
      return x.size();
    }
};