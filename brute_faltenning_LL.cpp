//insertion at a ceertain point
#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
    int data;
    Node* next;
    Node* child;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
        child=NULL;
    }
};

Node* fun(Node* head)
{
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL)
    {
       arr.push_back(temp->data);
       if(temp->child!=NULL)
       {
        Node* c=temp->child;
        while(c!=NULL)
        {
            arr.push_back(c->data);
            c=c->child;
        }
       }
       temp=temp->next;
    }

    sort(arr.begin(),arr.end());

    Node* dummy=new Node(-1);
    Node*n=dummy;
    for(int i=0;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        n->next=temp;
        n=temp;
    }

    return dummy->next;
}



int main()
{
    int i=0;
    int n=5;

   Node* head = new Node(5);
   head->child = new Node(14);
   
   head->next = new Node(10);
   head->next->child = new Node(4);
   
   head->next->next = new Node(12);
   head->next->next->child = new Node(20);
   head->next->next->child->child = new Node(13);
   
   head->next->next->next = new Node(7);
   head->next->next->next->child = new Node(17);

   

    Node* h=fun(head);

    Node* temp=h;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}