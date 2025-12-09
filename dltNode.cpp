#include<iostream>
using namespace std;
struct Node{
    int data ;
    Node *next;
};
Node *create_Node(Node *head ,int element){
    Node *new_Node=new Node;
    while(new_Node==NULL){
        cout<<" Memory overflow";
    }
    new_Node->data=element;
    new_Node->next=NULL;
    return new_Node;
}
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main (){
    Node *head=NULL;
    Node *first,*second,*third,*dltfirst;
    first=create_Node(head ,10);
    head=first;
    second=create_Node(head , 20);
    first->next=second;
    third=create_Node(head, 30);
    second->next=third;
    

    print(head);


}