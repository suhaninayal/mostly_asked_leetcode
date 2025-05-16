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
bool isleaf(node* root)
{
    return (root->left==NULL && root->right==NULL);
}

void add_left(vector<int> &res,node* root)
{
    node* temp=root->left;
    while(temp)
    {
    if(!isleaf(temp))
    {
        res.push_back(temp->data);
    }
    if(temp->left==NULL)
    {
        temp=temp->left;
    }
    else
    {
        temp=temp->right;
    }
}
}


void add_leaf(vector<int> &res,node* root)
{
    if(isleaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if(root->left!=NULL)
    {
        add_leaf(res,root->left);
    }
    if(root->right!=NULL)
    {
        add_leaf(res,root->right);
    }
}


void add_right(vector<int> &res,node* root)
{
    node* cur=root->right;
    vector<int> t;
    while(cur)
    {
        if(!isleaf(cur))
        {
            t.push_back(cur->data);
        }
       if(cur->right==NULL)
        {
            cur=cur->right;
        }
        else
        {
            cur=cur->left;
        }
    }
    for(int i=t.size()-1;i>=0;i--)
    {
        res.push_back(t[i]);
    }
}


vector<int> fun(node* root)
{
    vector<int> res;
    if(root==NULL) return res;
    if(!isleaf(root)) res.push_back(root->data);
    add_left(res,root);
    add_leaf(res,root);
    add_right(res,root);
    return res;
}

int main()
{
   node* root=NULL;
   root=new node(1);
   root->right=new node(2);
   root->left=new node(3);
   root->right->left=new node(4);
   root->right->right=new node(5);
   vector<int> ans=fun(root);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
}