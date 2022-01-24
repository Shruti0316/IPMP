//find the middle of the linked list
#include<bits/stdc++.h>
#include "../Day0/linked.h"
using namespace std;

//APPROACH 1
/*mid element will be (length/2 +1)th element of the list*/
int middle(Node* head,int pos){
    if(head == NULL){
        return -999;
    }
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count += 1;
        if(count == pos){
            return temp -> data;
        }
        temp = temp -> next;
    }
}

//APPROACH 2
/*intialize two pointers (slow and fast) poinitng to head
Moving slow by one and fast by two
when fast will reach the end slow will be at middle element*/
int middle2(Node* head){
    if(head == NULL){
        return -999;
    }
    Node *slow = head,*fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow->data;
}

int main()
{
    int len,pos,ch;
    Node* head = NULL;
    do
    {
        cout<<"\nEnter 1 to insert an element: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>pos;   //pos is the element
            insertFront(head,pos);
            break;
        default:
            break;
        }
    } while (ch == 1);
    
    cout<<"\nList: ";
    display(head);

    // METHOD 1
    len = length(head);
    pos = len/2 +1;
    cout<<"Middle element: "<<middle(head,pos);

    //METHOD2
    cout<<"Middle element: "<<middle2(head);
    return 0;
}