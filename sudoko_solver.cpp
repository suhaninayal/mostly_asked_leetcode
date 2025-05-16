#include<bits/stdc++.h>
using namespace std;

bool isvalid(vector<vector<char>>&board,int row,int col,char c)
{
    for(int i=0;i<9;i++)
    {
        if(board[i][col]==c)
        {
            return false;
        }
        if(board[row][i]==c)
        {
            return false;
        }

        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
        {
            return false;
        }
    }
    return true;
}
bool solveSudoko(vector<vector<char>>&board)
{
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            if(board[i][j]=='.')
            {
                for(char c='1';c<='9';c++)
                {
                    if(isvalid(board,i,j,c))
                    {
                        board[i][j]=c;
                    }
                    if(solveSudoko(board))
                    {
                        return true;
                    }

                    else
                    {
                        board[i][j]='.';
                    }
                }
                return false;
            }
        }

    }
    return true;
}
int main()
{
    //since the sudoko board is 9x9 matrix so we are just writing the function only.
}


//TIME COMPLEXITY OF THIS QUESTION IS 0(9^N)