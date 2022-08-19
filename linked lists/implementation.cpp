#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Create A class node

class node{
    public:
    int data;
    node* next;

    // Node Class Constructor
    node(int val){
        data=val;
        next=NULL;

    }
};

// Insert Element At Tail

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        }
        temp->next=n;
}

// Display All Element

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// Insert At Head

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
// delete from start
void deleteAtbeginning(node* &head){
    cout<<endl;
head=head->next;
}

//delete from end
void deleteAtend(node* &head){
node *temp=head;
node* t ;
while(temp->next!=NULL){
    t = temp;
    temp=temp->next;
}
free(t->next);
t->next=NULL;
}

//delete for a given value
void deleteGivenvalue(node* head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtbeginning(head);
    }
    else{
        node* temp=head;
        while(temp->data!=val){
            temp=temp->next;
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        delete(todelete); //free the space
    }
}

// Searching  At Linked List

bool Search(node* head,int key){
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==key){
          return true;
        }
        temp=temp->next;  
  }
  return false;
}

// reverse linkedlist
//iterative 
node* reverse(node* &head){  //we are using node*bcoz we will return head * value
    node* prevptr=NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reverseRecurssive(node* &head){
    if(head==NULL || head->next==NULL){
         return head;
    }
    
    node* newhead = reverseRecurssive(head->next);

    head->next->next=head;
    head->next =NULL;

return newhead;
}
// reverse k nodes in a linked list
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count = 0;
    while(currptr!=NULL && count<k){
       nextptr = currptr->next;
       currptr->next=prevptr;
       prevptr=currptr;
       currptr=nextptr;
       count++;
    }
    if(nextptr!=NULL){
    head->next = reversek(nextptr,k);
    }
    return prevptr;
}

int main(){
    
    node* head =NULL;
    insertAtTail(head,12);
    insertAtTail(head,178);
    insertAtTail(head,1788);
    display(head);
    insertAtHead(head,345);
    display(head);
    cout<<Search(head,178);
    deleteAtbeginning(head);
    display(head);
    deleteAtend(head);
    display(head);
    node* newhead = reverseRecurssive(head);
    display(newhead);
    return 0;
}