#include<iostream>
using namespace std;
int foundnumber(int arr[],int n ,int key){
    for(int i =0;i<n;i++){
        if(arr[i]==key){
            return i;
        }       

    }return -1;
}   

int main(){
    int n,k,found=0,  arr[100];;
    cout<<"How many number you want to input in array:";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"which number you want to search :";
    cin>>k;
    int result=foundnumber(arr ,n,k);
    if(result==-1) cout<<"The number is not  found ";
    else cout<<"The number is not found in index "<<result;



}