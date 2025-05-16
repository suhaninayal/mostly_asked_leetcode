//sort the linked list

#include <iostream>  // For input-output operations
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
Node* merge2(Node* left,Node* right)
{
  Node* dummy=new Node(-1);
  Node* temp=dummy;
  while(left!=NULL || right!=NULL)
  {
    if(left->data<right->data)
    {
     temp->next=left;
      temp=left;
      left=left->next;
    }
    else
    {
     temp->next=right;
     temp=right;
      right=right->next;
    }
  }
  while(left!=NULL)
  {
    temp->next=left;
    temp=left;
    left=left->next;
  }
  while(right!=NULL)
  {
    temp->next=right;
    temp=right;
    right=right->next;

  }
  return dummy->next;
}

Node* middle(Node * head)
{
  Node* fast=head->next;
  Node* slow=head;
  while(fast!=NULL && fast->next!=NULL)
  {
   slow=slow->next;
    fast=fast->next->next;
  }
  return slow;
}

Node* sort1(Node* head)
{
  if(head==NULL || head->next==NULL)
  {
    return head;
  }
   Node* res=middle(head);
  Node* right=res->next;
   res->next=NULL;
   Node* left=head;
   left=sort1(left);
   right=sort1(right);
   return merge2(left,right);



}




  



int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(2);
    Node* fifth=new Node(10);
   // Node* sixth=new Node(6);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
   // sixth->next=NULL;
   
   Node* ans=sort1(head);
   Node* t=ans;
   while(t!=NULL)
   {
    cout<<t->data;
    t=t->next;
   }
   
     
    
    
}