//minimum time taking to burn the nodes from the target node//bottom_view_of_the_binary_tree
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


void mark_parent(node* root,unordered_map<node*,node*> &parent)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* current=q.front();
        q.pop();
        if(current->left)
        {
            q.push(current->left);
            parent[current->left]=current;
        }
        if(current->right)
        {
            q.push(current->right);
            parent[current->right]=current;
        }
    }
}


int burn_node(node* root,node* target)
{
    unordered_map<node*,node*> parent;
    mark_parent(root,parent);
    unordered_map<node*,bool>vis;
    queue<node*>q;
    int time=0;
    q.push(target);
    vis[target]=true;
    while(!q.empty())
    {
       
        int s=q.size();
       
        time++;
        
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

            if(parent[current] && !vis[parent[current]])
            {
                q.push(parent[current]);
                vis[parent[current]]=true;
            }

        }
    }
    return time;

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
   int ans=burn_node(root,root->right);
   cout<<ans;
  

   
}