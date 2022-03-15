/*
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node* n = new node(val);
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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertattail(head,100);
    insertattail(head,200);
    insertattail(head,300);
    insertattail(head,400);
    display(head);
    return 0;
}
*/














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

void insertattail(node* &head, int val){
    node* n = new node(val);
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

void insertathead(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void search(node* head,int val){
    if(head==NULL){
        cout<<"list is empty"<<" ";
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            cout<<"key is there"<<" ";
            return;
        }
        temp=temp->next;
    }
    cout<<"key is not in the list"<<" ";
    return;
}

int main(){
    node* head=NULL;
    insertattail(head,100);
    insertattail(head,200);
    insertattail(head,300);
    insertattail(head,400);
    insertathead(head,000);
    display(head);
    search(head,500);
    return 0;
}






