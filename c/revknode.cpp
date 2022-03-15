#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};


void insertatend(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
} 

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

node* revk(node* &head,int k){
    node* prev=NULL;
    node* curr=head;
    node* next;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        head->next=revk(next,k);
    }
    return prev;
}

int main(){
    node* head=NULL;
    insertatend(head,100);
    insertatend(head,200);
    insertatend(head,300);
    insertatend(head,400);
    insertatend(head,500);
    insertatend(head,600);
    display(head);
    int k=2;
    node* newh=revk(head,k);
    display(newh);
    return 0;
}