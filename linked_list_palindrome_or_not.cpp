//check whether the linked list is palindrome or not

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

Node* rev(Node* h)
{

    Node * temp=h;
    Node* p=NULL;
    Node* q=NULL;
    while(temp!=NULL)
    {
     q=temp->next;
     temp->next=p;
     p=temp;
     temp=q;
    }
    h=p;
    return h;
}
bool palindrome(Node* head)
{



    if( head->next==NULL)
    {
        return true;
    }
    Node* slow=head;
    Node* fast=head;
    Node* q=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    Node* a=rev(slow);
   
    
    while(a!=NULL)
    {
        if(a->data !=q->data)
        {
            return false;
        }
        a=a->next;
        q=q->next;
    }
    return true;



  
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
   
    if(palindrome(head)){
       cout<<"yes";
    }
    else
    {
        cout<<"not";
    }
   
   
     
    
    
}