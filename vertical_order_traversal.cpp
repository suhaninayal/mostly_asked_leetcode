//vertical order traversal of binary tree
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

vector<vector<int>> fun(node* root)
{
    map<int,map<int,multiset<int>>> mpp;
    queue<pair<node*,pair<int,int>>>q;
    q.push({root,{0,0}});

    while(!q.empty())
    {
        auto p=q.front();
        q.pop();
        node* temp=p.first;
        int x=p.second.first;
        int y=p.second.second;
        mpp[x][y].insert(temp->data);

        if(temp->left)
        {
            q.push({temp->left,{x-1,y+1}});
        }
        if(temp->right)
        {
            q.push({temp->right,{x+1,y+1}});
        }
    }

    vector<vector<int>> ans;
    for(auto p:mpp)
    {
        vector<int>col;
        for(auto q:p.second)
        {
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}

int main()
{
   node* root=NULL;
   root=new node(1);
   root->right=new node(2);
   root->left=new node(3);
   root->right->left=new node(5);
   root->right->right=new node(6);
   root->left->right=new node(8);
   vector<vector<int>> ans=fun(root);
   for(auto it:ans)
   {
    for(auto i:it)
    {
        cout<<i;
    }
    cout<<endl;
   }
}