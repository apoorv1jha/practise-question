class Solution {
public:
    bool issafe(vector<vector<char>>&board,int row,int col,char digit){
        for(int i=0;i<9;i++ ){
            if(board[row][i]==digit){
                return false;
            }
        }
        for(int j=0;j<9;j++ ){
            if(board[j][col]==digit){
                return false;
            }
        }
        int startrow = (row/3)*3;
        int startcol = (col/3)*3;
        for(int i= startrow;i<startrow+3;i++){
            for(int j=startcol;j<startcol+3;j++){
                if(board[i][j]==digit){
                    return false;
                }
            }
        }
        return true;
        
    }

    bool suduko(vector<vector<char>>&board,int row,int col){
        if(row==9){
            return true;
        }
        int nextrow = row,nextcol = col+1;
        if(nextcol==9){
            nextrow = row+1;
            nextcol = 0;
        }
        if(board[row][col]!='.'){
            return suduko(board,nextrow,nextcol);
        }
        for(int i='1';i<='9';i++){
            if(issafe(board,row,col,i)){
                board[row][col]=i;
                if(suduko(board,nextrow,nextcol)){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        suduko(board,0,0);
    }
};