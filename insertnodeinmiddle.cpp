#include<iostream>
using namespace std;
struct Node{
    int data ;
    Node *next;
};
Node *create_Node(Node *head , int element ){
    Node *new_Node= new Node;
    while (new_Node==NULL){
        cout<<"Memory overflow";
        exit(1);
    }
    new_Node->data=element;
    new_Node->next=NULL;
    return new_Node;
}
//Node *creatmid_Node(Node *head){
    //Node *temp=head;
    //while(temp!=NULL){
      //  temp=temp->next;
    //}
   // return temp;
//}//
void *print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main (){
    Node *head=NULL;
    Node *first,*second ,*findmid,*mid;
    first=create_Node(head , 10);
    head=first;
    
    mid=create_Node(head,30);
    first->next=mid;
    second=create_Node(head ,20);
    mid->next=second;



    print(head);
}
