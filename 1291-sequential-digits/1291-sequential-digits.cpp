class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>res;
        string s ="123456789";

       for(int i = 2;i<=9;i++){
        for(int j=0;j+i<=9;j++){
            int x = stoi(s.substr(j,i));
            if(x>=low&&x<=high){
                res.push_back(x);
            }
        }
       }
       return res;
    }
};