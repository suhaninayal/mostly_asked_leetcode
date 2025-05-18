//bottom_view_of_the_binary_tree
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

void mark_parent(node* root,unordered_map<node*,node*> &parent_track,node* target)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* current=q.front();
        q.pop();

        if(current->left)
        {
            parent_track[current->left]=current;
            q.push(current->left);
        }
        if(current->right)
        {
            parent_track[current->right]=current;
            q.push(current->right);
        }
    }
}


vector<int> distant(node* root,node* target,int k)
{
    unordered_map<node*,node*>parent_track;
    mark_parent(root,parent_track,target);

    unordered_map<node* ,bool>vis;
    queue<node*>q;
    q.push(target);
    vis[target]=true;
    int curr_level=0;

    while(!q.empty())
    {
        int s=q.size();
        if(curr_level++==k) break;
        for(int i=0;i<s;i++)
        {
            node* current=q.front();
            q.pop();
            if(current->left && !vis[current->left])
            {
                q.push(current->left);
                vis[current->left]=true;
            }

            if(current->right && !vis[current->right])
            {
                q.push(current->right);
                vis[current->right]=true;
            }

            if(parent_track[current] && !vis[parent_track[current]])
            {
                q.push(parent_track[current]);
                vis[parent_track[current]]=true;
            }
        }
    }

    vector<int> result;
    while(!q.empty())
    {
        node* current=q.front();
        q.pop();
        result.push_back(current->data);
    }
    return result;
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
   node* target=root->left;
   int k=1;
   vector<int> ans=distant(root,target,k);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
}