/*
  This code solves the 37th problem of leetcode "Sudoku Solver"
*/
class Solution {
public:
    bool issafe(int row,int col,char k,vector<vector<char>>&board){
       int i,j;
       for(i=0;i<9;i++)
       {
        if(board[row][i]==k)
        {
            return false;
        }
       }
        for(i=0;i<9;i++)
       {
        if(board[i][col]==k)
        {
            return false;
        }
       } 
       int s=row/3*3; 
       int e=col/3*3; 
       for(i=s;i<=s+2;i++)
       {
        for(j=e;j<=e+2;j++)
        {
            if(board[i][j]==k)
            {
                return false;
            }
        }
       }

        return true;
    }
    bool solve(vector<vector<char>>&board)
    {
         for(int i=0;i<9;i++)
         {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                  for(char dig='1';dig<='9';dig++)
                  {
                    if(issafe(i,j,dig,board))
                    {
                        board[i][j]=dig; 
                        if(solve(board))
                        {
                            return true;
                        }
                        else 
                        {
                            board[i][j]='.';
                        }
                    }
                  }
                  return false;
                }
            }
         } 
         return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
