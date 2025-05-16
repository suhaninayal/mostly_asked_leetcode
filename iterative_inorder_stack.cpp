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
    vector<int> res;
    node* temp=root;
    stack<node*> st;
    
    if(temp==NULL)
    {
        return res;
    }
    while(true)
    {
        if(temp!=NULL)
        {
            st.push(temp);
            temp=temp->left;
        }
        else
        {
            if(st.empty()==true)
            {
                break;
            }
            temp=st.top();
            st.pop();
            res.push_back(temp->data);
            temp=temp->right;
        }
    }
    return res;
}

int main()
{
    node* root=NULL;
    root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    
    root->left->right=new node(5);
    

   vector<int>ans= postorder(root);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
    return 0;


}