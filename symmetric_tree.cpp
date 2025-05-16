//symmetric tree
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;

    }
};


bool fun(node* left,node* right)
{
    if(left==NULL || right==NULL)
    {
        return left==right;
    }
    if(left->data!=right->data)
    {
        return false;
    }

    return fun(left->left,right->right) && fun(left->right,right->left);

}




int main()
{
    node* root=NULL;
    root=new node(1);
    root->right=new node(2);
    root->left=new node(2);
    root->right->left=new node(3);
    root->left->right=new node(3);
    root->right->right=new node(4);
    root->left->left=new node(4);
   bool ans=fun(root->left,root->right);
   cout<<ans;
    

}