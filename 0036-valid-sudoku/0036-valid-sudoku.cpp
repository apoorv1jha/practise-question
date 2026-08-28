class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // cause we need filled cells to be validated so we we continue the unifilled one
        for(int i=0;i<9;i++){
           for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                continue;
            }
            // check row
            for(int  col=0;col<9;col++){
                if(board[i][col]==board[i][j] && col!=j){
                    return false;
                }
            }
            //check col
            for(int  row=0;row<9;row++){
                if(board[row][j]==board[i][j] && row!=i){
                    return false;
                }
            }
            // check 3x3
            int startrow = (i/3)*3,startcol = (j/3)*3;
            for(int row = startrow;row<startrow+3;row++){
                for(int col = startcol;col<startcol+3;col++){
                    if((row!=i && col!=j) && board[row][col]==board[i][j]){
                        return false;
                    }
                }
            }

           }
        }
        return true;
    }
};