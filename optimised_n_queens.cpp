//optimised n queens
#include<bits/stdc++.h>
using namespace std;


void solve(int col,vector<string>&board,vector<vector<string>>&ans,vector<int> &leftrow,vector<int> &upperdiagonal,vector<int> &lowerdiagonal,int n)
{
    if(col==n)
    {
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(leftrow[row]==0 && lowerdiagonal[row+col]==0 && upperdiagonal[n-1+col-row]==0)
        {
            board[row][col]='Q';
            leftrow[row]=1;
            lowerdiagonal[row+col]=1;
            upperdiagonal[n-1+col-row]=1;
            solve(col+1,board,ans,leftrow,upperdiagonal,lowerdiagonal,n);
            board[row][col]='.';
            leftrow[row]=0;
            lowerdiagonal[row+col]=0;
            upperdiagonal[n-1+col-row]=0;
        }
    }
}


vector<vector<string>>solvenqueens(int n)
{
    vector<vector<string>> ans;
    vector<string>board(n,string(n,'.'));
    vector<int> leftrow(n,0),upperdiagonal(2*n-1,0),lowerdiagonal(2*n-1,0);
    solve(0,board,ans,leftrow,upperdiagonal,lowerdiagonal,n);
    return ans;
}
int main()
{
    int n=4;
    vector<vector<string>>ans=solvenqueens(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<"arrangement"<<i+1<<"\n";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;

}