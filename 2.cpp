#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *create_Node(Node *head , int element){
    Node *new_Node= new Node;
    if(new_Node==NULL){
        cout<<"Memory overflow";
        exit(1);    
    }
    new_Node->data=element;
    new_Node->next=NULL;
    return new_Node;
}
Node *get_last(Node *head){
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node *head=NULL;
    Node *first,*second,*third,*beg,*last_Node,*end;
    first=create_Node(head , 10);
    head=first;
    second=create_Node(head , 20);
    first->next = second;
    third=create_Node(head , 30);
    second->next=third;
    beg=create_Node(head , 20);
    beg->next=head;
    head=beg;
    last_Node=get_last(head);
    end=create_Node(head,50);
    last_Node->next=end;
    print (head);
}