//sort the linked list


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


Node* sort(Node* head)
{
    vector<int> a;
    Node* p=head;
    while(p!=NULL)
    {
        a.push_back(p->data);
        p=p->next;
    }
    sort(a.begin(),a.end());
    Node* q=NULL;
    Node* k=NULL;
    for(int i=0;i<a.size();i++)
    {
          if(q==NULL)
          {
            q=new Node(a[i]);
            k=q;
          }
          else
          {
            Node* temp=new Node(a[i]);
            k->next=temp;
            k=temp;
          }
    }
    return q;
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
   
   Node* ans=sort(head);
   Node* t=ans;
   while(t!=NULL)
   {
    cout<<t->data;
    t=t->next;
   }
   
     
    
    
}