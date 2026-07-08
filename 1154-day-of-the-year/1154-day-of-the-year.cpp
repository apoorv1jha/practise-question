class Solution {
public:
    int dayOfYear(string date) {
        //change string into int
        int years = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        // store all the month date in ans
        vector<int>ans = {31,28,31,30,31,30,31,31,30,31,30,31};
        // conditon statement for leap year
        if((years%400==0)||(years%4==0 && years%100!=0)){
            ans[1]=29;
        }
        //calculate total day
        int totaldays=0;
        int n = ans.size();
        for(int i=0;i<month-1;i++){
            totaldays+=ans[i];
        }
        // including today current date
        totaldays+=day;
        return totaldays;
    }
};