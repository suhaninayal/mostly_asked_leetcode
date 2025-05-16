//right view of the binary tree
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

vector<int> fun(node* root)
{
    vector<int> ans;
    queue<pair<node*,int>>q;
    map<int,int>mpp;
    q.push({root,0});
    while(!q.empty())
    {
       auto it=q.front();
        q.pop();
        node* temp=it.first;
        int l=it.second;
        if(mpp.find(l)!=mpp.end())
        {
            mpp[l]=temp->data;
        }
        else
        {
            mpp[l]=temp->data;
        }
       
        if(temp->right)
        {
            q.push({temp->right,l+1});
        }
        if(temp->left)
        {
            q.push({temp->left,l+1});
        }
    }
    for(auto it:mpp)
    {
        ans.push_back(it.second);
    }
    return ans;
}
int main()
{
    node* root=NULL;
    root=new node(1);
    root->left=new node(4);
    root->right=new node(3);
    
    root->right->left=new node(6);
    root->right->right=new node(8);
    root->left->right=new node(9);
    
    vector<int> ans=fun(root);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}