class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int x = n;
        while(x){
            int digit = x%10;
            sum+=digit;
            prod*=digit;
            x=x/10;
        }
        int totalsum = sum+ prod;
        if(n%totalsum==0){
            return true;
        }else{
            return false;
        }
        
    }
};