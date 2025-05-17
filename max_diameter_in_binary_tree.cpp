//maximum width of a binary tree
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    node( int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int fun(node* root)
{
    
 if(root==NULL)
 {
    return 0;
    
 }
 int count=0;
 queue<pair<node*,int>>q;
 q.push({root,0});
 while(!q.empty())
 {
    int s=q.size();
    int last,first;
    int minn=q.front().second;
    for(int i=0;i<s;i++)

    {
     int cur_ind=q.front().second-minn;
    node* temp=q.front().first;
    
    q.pop();
    if(i==0)
    {
        first=cur_ind;
    }
    if(i==s-1)
    {
        last=cur_ind;
    }

    if(temp->left)

    {
        q.push({temp->left,cur_ind*2+1});
    }
    if(temp->right)
    {
        q.push({temp->right,cur_ind*2+2});
    }
 }
 count=max(count,last-first+1);
 }
 return count;

}



int main()
{

   node* root=NULL;
   root=new node(1);
   root->right=new node(2);
   root->left=new node(3);
   root->right->left=new node(5);
   root->right->right=new node(7);
   root->left->right=new node(9);
   int  ans=fun(root);
   cout<<ans;
  
}