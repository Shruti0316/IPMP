//Given a singly linked list of characters, write a function that returns true if the given list is a palindrome, else false.
#include<bits/stdc++.h>
#include "../Day0/linked.h"
using namespace std;

bool ispalindrome(Node* head){
    stack <int> s;
    Node* temp = head;
    while(temp != NULL){
        s.push(temp-> data);
        temp = temp -> next;
    }
    while(head != NULL){
        if(head -> data != s.top()){
            return false;
        }
        s.pop();
        head = head -> next;
    }
    return true;
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

    cout<<"\nList: ";
    display(head);
    if(ispalindrome(head)){
        cout<<"Is Palindrome: True";
    }
    else{
        cout<<"Is Palindrome: False";
    }
    return 0;
}