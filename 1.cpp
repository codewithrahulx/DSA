#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;    
};
Node *create_Node(Node *head , int element){
    Node *new_Node= new Node;
    if(new_Node==NULL){
        cout<<"memory overflow";
        exit(1);
    }
    new_Node->data=element;
    new_Node->next=head;
    return new_Node;
}
int main(){
    Node *head=NULL;
    Node *first , *second,*third;
    first=create_Node(head , 10);
    head=first;
    second=create_Node(head , 20);
    head=second;
    third=create_Node(head , 30);
    head=third;
    Node *temp= head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}