#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"Enter binary numbers:";
    cin>>n;
     int ans=0;
    int power=1;
    while(n>0){
        int remainder =n%10;
        ans+=(remainder*power);
        n=n/10;
        power*=2;
    }
    cout<<"The decimal form is:"<<ans;
    return 0;
}