//delete the nth  node from the back of the linked list

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

Node* del_middle(Node* head,int pos,int count)
{
    
    int k=count-pos;
     k=k+1;
    Node * t=head;
    Node* p=NULL;
    int i=1;
    while(i!=k)
    {   p=t;
        t=t->next;
        i++;

    }
    p->next=t->next;
    delete(t);
    return head;
    
}



int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
   // Node* sixth=new Node(6);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
   fifth->next=NULL;
   // sixth->next=NULL;
   Node* len=head;
   int count=0;
   while(len!=NULL)
   {
     count++;
     len=len->next;
   }
   int p=2;
   Node* ans=del_middle(head,p,count);
   Node* temp=ans;
   while(temp!=NULL)
   {
    cout<<temp->data;
    temp=temp->next;
   }
   
     
    
    
}