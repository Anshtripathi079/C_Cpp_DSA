#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Create A class node

class node{
    public:
    int data;
    node* next;
    node* prev;

    // Node Class Constructor
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtend(node* &head,int val){
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
node* temp=head;
node* n = new node(val);
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
n->prev=temp;
}

void insertAthead(node* &head,int val){
node* n = new node(val);
n->next=head;
if(head!=NULL){
head->prev=n;
}
head=n;
}
void deleteAthead(node *&head){
    node* todelete = head;
    head = head->next;
    head->prev=NULL;
    delete(todelete);
}

void deleteAtvalue(node* head,int val){
    node *temp=head;
    node* n;
    while(temp->data!=val){
        temp=temp->next;
    }    
    node* toDelete = temp->next;
    temp->next->next = temp;
    temp = temp->next->next;
    delete(toDelete);
}


void deleteAtvalue2(node* head,int pos){
    if(pos==1){
        deleteAthead(head);
    }
       node* temp = head;
       int count =1;
       while(temp!=NULL && count!=pos){
           temp=temp->next;
           count++;
       }
       temp->prev->next = temp->next;
       if(temp->next!=NULL)
       temp->next->prev = temp->prev;
       delete(temp);
}
// append last k node of a linked list
// eg: 2 3 4 5 6 7  and k=3 so we have to give 5 6 7 2 3 4
int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k){
  node* newHead;
  node* newTail;
  node* tail=head;
  int l=length(head);
  int count=1;
  while(tail->next!=NULL){
    if(count==l-k){
        newTail = tail;
    }
    if(count==l-k+1){
        newHead=tail;
    }
    tail=tail->next;
    count++;
  }

  newTail->next = NULL;
  tail->next=head;
  return newHead;
}
//find intersection point of two linked list 
int intersection(node* &head1,node* &head2){
 int l1 = length(head1);
 int l2 = length(head2);
 int d=0;  //for difference
 node* ptr1;
 node* ptr2; 
 if(l1>l2){
    d=l1-l2;
    ptr1 = head1;
    ptr2 = head2;
 }
 else{
    d=l2-l1;
    ptr1 = head2;
    ptr2 = head1;
 }
 while(d){
    ptr1 = ptr1->next;
    d--;
 }
 while(ptr1!=NULL && ptr2!=NULL){
    if(ptr1==ptr2){
        return ptr1->data;
    }
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
 }
 return -1;
}
//merge two sorted linked lists
//iterative way
node* merge(node* &head1,node* head2){
node* ptr1=head1;
node* ptr2=head2;
node* dummyNode = new node(-1);
node* ptr3 = dummyNode;

while(ptr1!=NULL && ptr2!=NULL){
    if(ptr1->data<ptr2->data){
        ptr3->next=ptr1;
        ptr1 = ptr1->next;
    }
    else{
        ptr3->next = ptr2;
        ptr2= ptr2->next;
    }
    ptr3 = ptr3->next;
}
while(ptr1!=NULL){
    ptr3->next = ptr1;
     ptr1 = ptr1->next;
     ptr3 = ptr3->next;
}
while(ptr2!=NULL){
      ptr3->next = ptr2;
     ptr2 = ptr2->next;
     ptr3 = ptr3->next;
}
return dummyNode->next;
}
// recursive way


node* mergeRecurssive(node* head1,node* head2){
   if(head1==NULL){
    return head2;
   }
   if(head2==NULL)
{
    return head1;
   }
node* result;
if(head1->data<head2->data){
    result=head1;
    result->next=mergeRecurssive(head1->next,head2);
}
else{
    result = head2;
    result->next = mergeRecurssive(head1,head2->next);
}
return result;
}
                                                                