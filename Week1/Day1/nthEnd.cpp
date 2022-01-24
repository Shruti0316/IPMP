//Given a Linked List and a number n write a function that returns the value at the n’th node from the end of the Linked List
#include<bits/stdc++.h>
#include "./linked.h"
using namespace std;

//APPROACH 1
//find (len+n-1)th node from beginning
int nthEndNode(Node* head,int n){
    int pos = length(head) - n + 1; //position of node from starting
    int count =0;
    Node* temp = head;
    while(temp != NULL){
        count += 1;
        if(pos == count){
            return temp -> data;
        }
        temp = temp -> next;
    }
    return -999;    //invalid position
}

//APPROACH 2
/*using two pointers reference and main pointer
Intialize both to head
move the reference pointer to n nodes from head
move both pointers one by one until the reference pointer reaches the end
when ref points to end main pointer will point to nth node from end
*/
int nthEndNode2(Node* head,int n){
    if(head == NULL){
        return -999;
    }
    Node* main = head;
    Node* ref = head;
    int count = 1;
    while(count != n){
        ref = ref -> next;
        count += 1;
        if(ref == NULL){
            return -999;
        }
    }
    while(ref != NULL && ref -> next!= NULL){
        ref = ref -> next;
        main = main -> next;
    }
    return main -> data;
}
int main()
{
    int ch,val,n;
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

    cout<<"\nvalue of n: ";
    cin>>n;
    cout<<"\nList: ";
    display(head);
    cout<<"Nth node from end: "<<nthEndNode2(head,n);
    return 0;
}