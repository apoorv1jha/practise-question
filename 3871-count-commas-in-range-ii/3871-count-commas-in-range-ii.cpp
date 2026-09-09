class Solution {
public:
    long long countCommas(long long n) {
        long count=0;
        for(long  i =1000;i<=n;i*=1000){
            count+=n-i+1;
        }
        return count;
    }
};