class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x =0;
        int sum =0 ;
        long long p = 1;
        while(n>0){
            int digit = n%10;
            if(digit!=0){
               
            sum+=digit;
             x+=digit*p;
            p*=10;
            }
            n/=10;
        }      
        return sum*x;
    }
};