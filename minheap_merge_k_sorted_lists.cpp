//merge k sorted list

#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
    
};

node* merge_list(vector<node*> &lists)
{
    priority_queue<pair<int,node*>,vector<pair<int,node*>>,greater<pair<int,node*>>>minheap;
    for(auto it:lists)
    {
       if(it!=NULL)
       {
        minheap.push({it->data,it});
       }
    }

    node* dummynode=new node(-1);
    node* temp=dummynode;
    while(!minheap.empty())
    {
        auto p=minheap.top();
        minheap.pop();
        temp->next=p.second;
        temp=temp->next;
       
        if(p.second->next)
        {
           minheap.push({p.second->next->data,p.second->next});
        }
    }
    return dummynode->next;
}



int main()
{
    node* l1=new node(1);
    l1->next=new node(3);
    l1->next->next=new node(4);

    node* l2=new node(4);
    l2->next=new node(6);
    l2->next->next=new node(7);


    node* l3=new node(8);
    l3->next=new node(9);
    l3->next->next=new node(10);


    vector<node*> lists={l1,l2,l3};
    node* temp=merge_list(lists);
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    
}





