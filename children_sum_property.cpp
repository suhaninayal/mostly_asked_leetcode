//children sum property
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

void inorderTraversal(node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data<<" ";
    inorderTraversal(root->right);
}

node* fun(node* root)
{
    if(root==NULL)
    {
        return root;
    }
    int child=0;
    if(root->left)
    {
        child+=root->left->data;
    }
    if(root->right)
    {
        child+=root->right->data;
    }

    if(child>=root->data)
    {
        root->data=child;
    }

    else
    {
        if(root->left)
        {
            root->left->data=root->data;
        }
        else if(root->right)
        {
            root->right->data=root->data;
        }
    }

    fun(root->left);
    fun(root->right);

    int tot=0;
    if(root->left)
    {
        tot+=root->left->data;
    }
    if(root->right)
    {
        tot+=root->right->data;
    }

    if(root->left || root->right)
    {
        root->data=tot;
    }


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
   fun(root);
   inorderTraversal(root);

}