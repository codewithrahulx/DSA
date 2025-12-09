#include<iostream>
using namespace std ;
struct node{
    int data ;
    node *next;//ekhane ami poroborti node er address rakhbo
};
node *create_node(node*head,int element){// ai function amake ekti notun node create korbe abong atar adress return korbe
    node *new_node=new node;// notun ekti node toiri korlam er jonno memroy allocation korlam
    if(new_node==   NULL){// ai node er jonno  computer mamory te jayga ache kina check korbo jodi na thake exit korle ber hoye jabe 
        cout<<"Memory overflow";
        exit(1);
    }
    new_node->data=element;//jokon coumputer mamorey te jayga thakbe ai jaygay ashbe abong ebong notun node e ami datar jaygay element insert korbo
    new_node->next=head;//aikhane poroborti node er address insert
    return new_node;

    
}
int main (){
    node *head=NULL;// first e linkedlist er head null thake 
    node *first,*second,*third;// duita node er jonno pointer newa hoyeche 
    first=create_node(head,10);//first node create korrrar jonno tar element pathalam ebon jeheto first node er jonno tai er address null hobe 
   head=first;//linked list er first nirdesh kore mane  bujay linked list ta first node theke shuru hoyeche 
   second=create_node(head,20);
   head=second;//second noder jonno head er position change korlam
   third=create_node(head,40);
   head=third;//similar as second node 
    node *temp=head;//traversal er jonno head er main value ke  temporary variable er moddhe rakhlam
    while(temp !=NULL){ // null pawar ag porjonto loop ta cholbe 
        cout<<temp->data<<" ";//traverse kora node er valu gula print korbe 
        temp=temp->next;// prottek ta node er jonno head/temp er value update korte hobe 
    }

}