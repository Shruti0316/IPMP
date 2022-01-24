//print reverse of it using a recursive function
#include<bits/stdc++.h>
#include "./linked.h"
using namespace std;

void printReverse(Node* head){
    if(head == NULL){
        return ;
    }
    printReverse(head -> next);
    cout<<head->data<<", ";
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

    cout<<"Reverse List: ";
    printReverse(head);
    return 0;
}