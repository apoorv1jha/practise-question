class Solution {
public:
        bool ispalindrome(string s, int left,int right){
            while(left<right){
                if(s[left]!=s[right]){
                    return false;
                }
                    left++;
                    right--;
            }
            return true;
        }
    bool validPalindrome(string s) {
       int n = s.length();
       int left =0;
       int right = n-1;
       int mid  = left+(right-left)/2;
       while(left<right){
        if(s[left]!=s[right]){
            return ispalindrome(s,left+1,right) ||ispalindrome (s,left,right-1);
        }
        left++;
        right--;
       }
       return true;
    }
};