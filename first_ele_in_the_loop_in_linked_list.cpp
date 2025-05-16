//first element of the loop in the linked list

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


int first_ele(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {
    
            slow=slow->next;
            fast=fast->next->next;
        if(fast==slow)
        {
            return slow->data;
        }
    }
    return -1;
  
  
}


int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
    Node* sixth=new Node(6);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=fourth;

    int ans=first_ele(head);
    cout<<ans;
    
}