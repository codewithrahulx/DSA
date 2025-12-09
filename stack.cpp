#include<iostream>
using namespace std;
struct Node{
    int data; 
    Node *prev;
};
Node *top=NULL;
void push (int elem){
    Node *new_Node = new Node;
    if(new_Node==NULL){
        cout<<"overflow";
        return ;
    }
    new_Node->data=elem;
    new_Node->prev=top;
    top=new_Node;

}
void pop (){
    if(top==NULL){
        cout<<u"underflow";
        return;
    }
    cout<<"poped"<<top->data<<endl;
    top=top->prev;
}
void print(){
    if(top == NULL){
        cout<<"empty";
    }
    cout<<"stack";
    Node *temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;

}
int main(){
    push(3);
    push(4);
    push(5);

    print();

    pop();
    pop();
    pop();
    pop();

    print();
    return 0;

}