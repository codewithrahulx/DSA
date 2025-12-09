#include<iostream>
using namespace std;
int main (){
    int x=5;
    int num[x];
    cout<<"Enter 5 numbers in array:";
    for(int i=0;i<5;i++){
        cin>>num[i];
    }
    int smallest=num[0];
    int largest=num[0];
    int smallestindex=0;
    int largestindex=0;
    for(int i=0;i<5;i++){
        if(num[i]<smallest){
            smallest=num[i];
            smallestindex=i;
        }
        if(num[i]>largest){
            largest=num[i];
            largestindex=i;
        }
    }
    cout<<"smallest number is :"<<smallest<<endl;
    cout<<"largest number is :"<<largest<<endl;
    cout<<"smallest index:"<<smallestindex<<endl;
    cout<<"largest index:"<<largestindex<<endl;
    return 0;
}