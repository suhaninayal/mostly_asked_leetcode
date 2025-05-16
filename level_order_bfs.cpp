//level order traversal
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    public:
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};

vector<vector<int>> level_order(node* root)
{
    vector<vector<int>> ans;
    queue<node*> q;
    if(root==NULL)
    {
        return ans;
    }
    q.push(root);
    while(!q.empty())
    {
        int s=q.size();
        
        vector<int> level;
        for(int i=0;i<s;i++)
        {
        node* temp=q.front();
        q.pop();
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        level.push_back(temp->data);
        }
        ans.push_back(level);
    
    }
    
    return ans;
}


int main()

{
    node* root=NULL;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);


    root->left->right=new node(5);
    vector<vector<int>> ans=level_order(root);
    for(auto it:ans)
    {
        for(auto i:it)
        {
            cout<<i;
        }
        cout<<endl;
    }

    
}