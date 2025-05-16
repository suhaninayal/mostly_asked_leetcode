//n queens this is the not the optimal approach this is done with the help of backtracking.
#include<bits/stdc++.h>
using namespace std;


bool issafe(int row,int col,vector<string> board,int n)
{
    int duprow=row;
    int dupcol=col;

    //checking the upper diagonal
    while(row>=0 && col>=0)
    {
        if(board[row][col]=='Q')
        {
            return false;
        }
        row--;
        col--;
    }
    //resetting the row and col to original value
    col=dupcol;
    row=duprow;

    //check the left side
    while(col>=0)
    {
        if(board[row][col]=='Q')
        {
            return false;
        }
        col--;
    }

    //reset the row and col to original value

    row=duprow;
    col=dupcol;

    //checking the lower diagonal
    while(row<n && col>=0)
    {
        if(board[row][col]=='Q')
        {
            return false;
        }
        row++;
        col--;
    }
    return true;
}


void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(issafe(row,col,board,n))
        {
            board[row][col]='Q';
            solve(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}
vector<vector<string>> solvenqueens(int n)
{
    vector<vector<string>>ans;
    vector<string> board(n,string(n,'.'));
    solve(0,board,ans,n);
    return ans;
}

int main()
{
    int n=4;
    vector<vector<string>>ans=solvenqueens(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<"arrangement"<<i+1<<"\n";
        for(int j=0;j<ans[0].size();j++)
        {
              cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
