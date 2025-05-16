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
bool funn(node* root,int k,vector<int> &temp)
{
    if(!root)
    {
        return false;
    }
    temp.push_back(root->data);
    if(root->data==k)
    {
        return true;
    }
    if((funn(root->left,k,temp) || funn(root->right,k,temp)))
    {
        return true;
    }

    temp.pop_back();
    return false;
}

vector<int> fun(node* root,int k)
{
    vector<int> temp;
  
    funn(root,k,temp);
    return temp;
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
 
  int k=7;
   vector<int> ans=fun(root,k);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
}