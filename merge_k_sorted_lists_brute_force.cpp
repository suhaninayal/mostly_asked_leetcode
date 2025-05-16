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
    vector<int> arr;
    for(auto it:lists)
    {
        while(it)
        {
            arr.push_back(it->data);
            it=it->next;
        }
    }
    sort(arr.begin(),arr.end());
    node* dummy=new node(-1);
    node* p=dummy;
    for(auto it:arr)
    {
        p->next=new node(it);
        p=p->next;
    }
    return dummy->next;

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





