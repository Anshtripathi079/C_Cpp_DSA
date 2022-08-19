//floyds algorithm / hare and tortoise algorithm
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

void makecycle(node* &head,int pos){
 node* temp = head;
 node* startNode;
 int count =1;
 while(temp!=NULL){

    if(count==pos){
    temp = temp->next;
    startNode = temp;
    }
    temp=temp->next;
    count++;

 }
 temp->next=startNode;
}


bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head){
node* slow=head;
node* fast=head;

do{
    slow=slow->next;
    fast=fast->next->next;
}while(slow!=fast);

fast=head;
while(slow->next!=fast->next){
    slow=slow->next;
    fast = fast->next;
}
slow->next=NULL;
}

int main(){

}