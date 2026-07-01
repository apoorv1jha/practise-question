class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());
        int left =0;
        int right = n-1;
        int mx = 0;
        int score =0;
        while(left<=right){
            if(power>=tokens[left]){
                power-=tokens[left];
                score++;
                left++;
                mx = max(mx,score);
            }else if(score>0){
                power+=tokens[right];
                right--;
                score--;
            }else{
                break;
            }
        }
        return mx;
    }
};