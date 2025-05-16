//top_view_of_the_binary_tree
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

vector<int> fun(node* root)
{
    vector<int> res;
    map<int,int>mpp;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        auto it=q.front();
        q.pop();
        node* temp=it.first;
        int l=it.second;
        if(mpp.find(l)==mpp.end())
        {
            mpp[l]=temp->data;
        }

        if(temp->left)
        {
            q.push({temp->left,l-1});
        }
        if(temp->right)
        {
            q.push({temp->right,l+1});
        }
    }
    for(auto it:mpp)
    {
        res.push_back(it.second);
    }
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

   vector<int> ans=fun(root);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
}