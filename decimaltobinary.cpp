#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout <<"Enter a decimal number :";
    cin>>n ;
    int ans=0;
    int power=1;
    while(n>0){
        int remainder=n%2;
        n=n/2;
        ans+=(remainder*power);
        power=power*10;
        
    }
    cout<<"The binary number is :"<<ans;
    return 0;
}