#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int length(Node* head){
    int count = 0;
    if(head == NULL){
        // cout<<"Empty list\n";
        return 0;
    }
    while(head != NULL){
        count += 1;
        head = head ->next;
    }
    return count;
}

void insertFront(Node* &head,int data){
    Node* newnode = new Node();
    newnode -> data = data;
    newnode -> next = head;
    head = newnode;
    //cout<<"Succesfully inserted the node\n"
}

void insertEnd(Node* &head,int data){
    Node* newnode = new Node();
    newnode -> data = data;
    newnode -> next = NULL;
    if(head == NULL){
        head = newnode;
        //cout<<"Succesfully inserted the node\n"
        return ;
    }
    Node* temp = head;
    while(temp-> next!= NULL){
        temp = temp ->next;
    }
    temp -> next = newnode;
    //cout<<"Succesfully inserted the node\n"
}

void insertAfterN(Node* &head,int pos,int data){
    if(pos == 0){
        insertFront(head,data);
        return ;
    }
    // if(pos == length(head)){
    //     insertEnd(head,data);
    //     return ;
    // }
    int count = 0;
    Node* temp = head;
    Node* newnode = new Node();
    newnode -> data = data;
    while(temp != NULL){
        count += 1;
        if(count == pos){
            newnode -> next = temp -> next;
            temp -> next = newnode;
            //cout<<"Succesfully inserted the node\n"
            return ;
        }
        temp = temp ->next;
    }
    cout<<"Invalid position\n";
    return ;
}

void deleteFront(Node* &head){
    if(head == NULL){
        cout<<"Empty list\n";
        return ;
    }
    Node* temp = head;
    head = head -> next;
    delete temp;
}

void deleteEnd(Node* &head){
    if(head == NULL){
        cout<<"Empty list\n";
        return ;
    }
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = NULL;
}

void deleteAfterN(Node* &head,int pos){
    if(head == NULL){
        cout<<"Empty list\n";
        return ;
    }
    int count = 0;
    Node* temp = head;
    if(pos == 0){
        deleteFront(head);
        return ;
    }
    while(temp->next != NULL){
        count += 1;
        if(count == pos){
            Node* del = temp -> next;
            temp -> next = temp -> next -> next;
            delete del;
            //cout<<"Succesfully deleted the node\n"
            return ;
        }
        temp = temp ->next;
    }
    cout<<"Invalid position\n";
    return ;

}

void deleteList(Node* &head){
    head = NULL;
    //cout<<"Deleted the list";
}

int search(Node* head,int key){
    if(head == NULL){
        // cout<<"Empty list\n";
        return 0;
    }
    while(head != NULL){
        if(head->data == key){
            return 1;
        }
        head = head ->next;
    }
    return 0;
}

void display(Node* head){
    if(head == NULL){
        cout<<"Empty list\n";
        return ;
    }
    while(head != NULL){
        cout<<head->data<<", ";
        head = head ->next;
    }
    cout<<"\n";
}