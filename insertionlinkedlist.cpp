#include<iostream>
using namespace std;
struct Node{
    int data ;
    Node *next;
};
Node *create_Node(Node *head ,int element){
    Node *new_Node= new Node;
    if(new_Node==NULL){
        cout<<"memory overflow";
        exit(1);
    }
    new_Node->data=element;
    new_Node->next=NULL;
    return new_Node;
}
//for getting last node address
Node *getlast_Node(Node *head){
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return temp;
}   
//for print linkedlist
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main (){
    Node *head=NULL;
    Node *first,*second,*third,*beg,*last_Node,*end;
    first=create_Node(head ,10);
    head=first;
    second=create_Node(head ,20);
    first->next=second ;
    third=create_Node(head ,30);
    second->next=third;
    // add  Node at the begging 
    beg=create_Node(head , 20);
    beg->next=head;
    head=beg;
    //add Node at the last
    last_Node=getlast_Node(head);// receive last Node address
    end=create_Node(head ,40);// create last Node 
    last_Node->next=end;// linked up last Node address and Last Node 
    
    print(head);
}