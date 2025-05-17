//lca in a binary tree
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

node* funn(node* root,int x,int y)
{
    if(root==NULL || root->data==x || root->data==y)
    {
      return root;
    }
    node* left=funn(root->left,x,y);
    node* right=funn(root->right,x,y);

    if(right==NULL)
    {
        return left;
    }
    if(left==NULL)
    {
        return right;
    }
    else
    {
        return root;
    }


}

node* fun(node* root)
{
    int x=7;
    int y=5;
    node* res= funn(root,x,y);
    return res;
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
   node*  ans=fun(root);
   cout<<ans->data;
  
}