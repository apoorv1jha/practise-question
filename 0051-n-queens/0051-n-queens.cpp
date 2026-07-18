class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int>col(n);
        vector<int>dig(2*n);
        vector<int>antidig(2*n);
        vector<vector<string>>res;
        vector<string>curr(n,string(n,'.'));

        function<void(int)>backtrack =[&](int row)->void{
            // base condition 
            if(row==n){
               res.push_back(curr);
               return;
            }
            for(int i=0;i<n;i++){
                if(col[i]+dig[row+i]+antidig[n- row+i]==0){
                     curr[row][i] = 'Q';
                
                col[i]=1;
                dig[row+i]=1;
                antidig[n-row+i] =1;
                backtrack(row +1);

                col[i]=0;
                dig[row+i]=0;
                antidig[n-row+i]=0;
                curr[row][i]='.';
            }

            }
        };
        backtrack(0);
        return res;
    }
};