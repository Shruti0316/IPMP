//reverse the linked list (reverse the list by changing the links between nodes)
#include<bits/stdc++.h>
#include "./linked.h"
using namespace std;

void reverse(Node* &head){
    Node* prev = NULL;
    Node* next = NULL;
    Node* current = head;

    while (current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
int main()
{
    int ch,val;
    Node* head = NULL;
    do
    {
        cout<<"\nEnter 1 to insert an element: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>val;
            insertFront(head,val);
            break;
        default:
            break;
        }
    } while (ch == 1);

    cout<<"\nOriginal List: ";
    display(head);

    cout<<"Reversed List: ";
    reverse(head);
    display(head);
    return 0;
}