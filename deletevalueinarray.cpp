#include<iostream>
using namespace std;
int main(){
    int n ,index,value;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in the array: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of index you want to delete :";
    cin>>index;
    while(index<n){
        arr[index]=arr[index+1];
        index++;

    }n=n-1;
    cout<<"Updated index is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}