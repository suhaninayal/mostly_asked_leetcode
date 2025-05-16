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

vector<int> postorder(node* root)
{
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }

    stack<node*> st1;
    stack<node*> st2;

    st1.push(root);
    while(!st1.empty())
    {
        st2.push(st1.top());
        node* temp=st1.top();
        st1.pop();
        if(temp->left!=NULL)
        {
            st1.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            st1.push(temp->right);
        }
    }
    while(!st2.empty())
    {
        node* p=st2.top();
        st2.pop();
        ans.push_back(p->data);
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
    

   vector<int>res= postorder(root);
   for(int i=0;i<res.size();i++)
   {
    cout<<res[i];
   }
    return 0;


}