#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
int getheight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=getheight(root->left);
    int rh=getheight(root->right);
    return 1+max(lh,rh);
}

bool fun(node* root)
{
    if(root==NULL)
    {
        return true;
    }

    int l=getheight(root->left);
    int r=getheight(root->right);

    if(abs(l-r)<=1 && fun(root->left) && fun(root->right))
    {
        return true;
    }
    return false;
}


int main()
{
    node* root=NULL;
    root=new node(1);
    root->right=new node(2);
    root->left=new node(5);
    root->right->left=new node(8);
    
   // root->right->right=new node(9);

    bool ans=fun(root);
    cout<<ans;
}