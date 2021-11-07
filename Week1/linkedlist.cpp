#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;   
    Node *next; //pointer pointing to next node
};

//**head is reference to the head of list
void insert_at_front(Node** head,int data){
    Node* new_Node = new Node();
    new_Node->data = data;
    new_Node->next = *head;
    *head = new_Node;
}

void delete_by_key(Node **head,int key){
    Node* temp = *head;
    Node* prev = NULL;

    //  if head node holds the key to be deleted
    if(temp!=NULL && temp->data == key){
        *head = temp->next;
        delete temp;    //free head
        cout<<key<<" deleted\n";
        return;
    } 
    //finding key in remaining list
    else{
        while(temp!=NULL && temp->data !=key ){
            prev = temp;
            temp = temp->next;
        }
        //key is not found
        if(temp == NULL){
            cout<<"Element does not exist\n";
            return;
        }
        //unlinking node from linked list
        cout<<key<<" deleted\n";
        prev->next = temp->next;
        delete temp;    //free memory
    }
    
}

void delete_by_pos(Node **head,int pos){
    if(*head == NULL){   //Empty list
        cout<<"Empty list";
        return;
    }
    Node* temp =*head;  //  storeing head node in temp
    if(pos == 0){
        *head  = temp->next;
        free(temp);
        cout<<"Element deleted from 0 position\n";
        return;
    }
    for(int i=0;temp!=NULL && i<pos-1;++i)
        temp = temp->next;

        if(temp == NULL || temp->next == NULL){
            cout<<"Invalid Position\n";
            return;
        }

        Node* next = temp->next->next;

        free(temp->next);
        //Unlink deleted node from list
        cout<<"Element deleted from "<<pos<<" Position\n";
        temp->next = next;
}

//Traverse through the linked list and compare all the data with the key to bee found 
void search(Node *node,int data){
    while(node!=NULL){
        if(data == node->data){
            cout<<"FOUND!\n";
            return;  
        }
        node = node->next;
    }
    cout<<"NOT Found!\n";
    return;
}

void list_length(Node *node){
    int count = 0;
    while(node!=NULL){
        count++;
        node = node->next;  
    }
    cout<<"Lenght: "<<count<<endl;
    return;
}

void print_list(Node *node){
    while(node!=NULL){
        cout<<node->data<<"  ";
        node = node->next;  //points the node to next node

    }
}

int main(){
    int ch,value;
    //Creating Empty linked list
    Node* head = NULL;

    cout<<"======MENU======\n1.Insert at front\n2.Delete a key\n3.Delete by position\n4.Search element\n5.Display\n6.Length\n================\n";
    while(ch!=0){
        cout<<"\nYour choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter the element to be inserted: ";
            cin>>value;
            insert_at_front(&head,value);
            break;
        case 2:
            cout<<"Enter the key: ";
            cin>>value;
            delete_by_key(&head,value);
            break;
        case 3:
            cout<<"Enter the position: ";
            cin>>value;
            delete_by_pos(&head,value);
            break;
        case 4:
            cout<<"Enter the element to be searched: ";
            cin>>value;
            search(head,value);
            break;
        case 5:
            print_list(head);
            break;
        case 6:
            list_length(head);
            break;
        case 0:
            break;
        default:
            cout<<"Invalid Choice";
        }
    }
    return 0;
}