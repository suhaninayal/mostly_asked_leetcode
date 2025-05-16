//delete the middle node fromt the linked list

#include<bits/stdc++.h>
using namespace std;

class Node
{    public:
    int data;
    Node* next;
   
    public:
    Node(int value)
    {
        data=value;
       next=NULL;

    }

};

Node* del_middle(Node* head)
{
    Node* slow=head;
    Node* fast=head;
   while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* temp=head;
    Node* q=NULL;
    Node* p=slow->next;
    Node* t=NULL;
    while(temp!=p)
    {
        t=q;
       q=temp;
       temp=temp->next;

    }
    t->next=p;
    q->next=NULL;
    delete(q);

   return head;
    
    
}



int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(4);
    //Node* fifth=new Node(5);
   // Node* sixth=new Node(6);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
  // fifth->next=NULL;
   // sixth->next=NULL;
  
   Node* ans=del_middle(head);
   Node* temp=ans;
   while(temp!=NULL)
   {
    cout<<temp->data;
    temp=temp->next;
   }
   
     
    
    
}