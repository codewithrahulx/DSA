#include<iostream>
using namespace std;
int main(){
    int n,index,items;
    cout<<"Enter the array element you want to input :";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the index number you want to input:";
    cin>>index;
    cout<<"Enter the item you want to input ";
    cin>>items;
    int j=(n-1);
    while(j>=index){
        arr[j+1]=arr[j];
        j--;
    }n=n+1;
    arr[index]=items;
    cout<<"Your updated array is :";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}