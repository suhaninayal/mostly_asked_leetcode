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

int fun(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=fun(root->left);
    if(lh==-1) return-1;
    int rh=fun(root->right);
   if(rh==-1) return -1;
    if(abs(lh-rh)>1)
    {
        return -1;
    }
    return 1+max(rh,lh);
}

bool balanced(node* root)
{
    return fun(root)!=-1;

}
int main()
{
    node* root=NULL;
    root=new node(1);
    root->right=new node(4);
    root->left=new node(2);
    root->right->left=new node(5);
    root->right->left->left=new node(7);
    root->right->left->right=new node(8);
    root->left->left=new node(3);
    root->right->right=new node(6);
    
   // root->right->right=new node(9);

    bool ans=balanced(root);
    cout<<ans;
}