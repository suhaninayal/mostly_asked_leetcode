//creating a single linked list
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    public:
    Node(int value)
    {
        data=value;
        next=NULL;
        
    }


};
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int n=5;
    int i=0;
    while(i<n)
    {
        int x;
        cin>>x;
        if(head==NULL)
        {
           head=new Node(x);
           tail=head;
        }

        else
        {
            Node* temp=new Node(x);
            tail->next=temp;
            tail=temp;
        }
         i++;
    }

    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}







