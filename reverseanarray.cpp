#include<iostream>
using namespace std ;
int main(){
    int rev=0,arr[100],n;
    cout<<"how many numbere you want to input :";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        arr[j]=arr[j+(n-1)];
    }
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
}