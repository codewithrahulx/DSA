#include<iostream>
using namespace std;
int main(){
    int key,n;
    int arr[100];
    cout<<"how many number you want to input in array:";
    cin>>n;
    cout<<"Enter "<<n<<" element of an array: "<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a number you want to search";
    cin>>key;
    int found=0;
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            cout<<"Your number is founud in "<<i<<"index";
            found=1;
            break;
        }
        
    }
    if(found==0){
            cout<<"Your number is not found and the index is invalid";
        }
    return 0;

}