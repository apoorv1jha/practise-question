class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int n = source[0];
        int m = source[1];
        int x = target[0];
        int y = target[1];

        if(n==x && m==y){
            return 0;
        }
        if(abs(n-x)==abs(m-y)){
            return 1;
        }
        if((n+m)%2!=(x+y)%2){
            return -1;
        }
        return 2;
        
    }
};