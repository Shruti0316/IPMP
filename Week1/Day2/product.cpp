// Product of two numbers given in Linked List
#include<bits/stdc++.h>
#include "../Day0/linked.h"
using namespace std;

int num(Node* head){
    int num = 0;
    while(head != NULL){
        num = num*10 + head->data;
        head = head -> next;
    }
    return num;
}
int main()
{
    int ch,val;
    Node* head1 = NULL;
    Node* head2 = NULL;
    //new node will be added at the end of linked list
    do
    {
        cout<<"\nEnter 1 to insert an element: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>val;
            insertEnd(head1,val);
            break;
        default:
            break;
        }
    } while (ch == 1);
    do
    {
        cout<<"\nEnter 1 to insert an element: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>val;
            insertEnd(head2,val);
            break;
        default:
            break;
        }
    } while (ch == 1);

    cout<<"\nList1: ";
    display(head1);
    cout<<"\nList2: ";
    display(head2);

    cout<<"Product: "<<num(head1)*num(head2);
    return 0;
}