#include<iostream>
using namespace std;
int main (){
    int x;
    cin>>x;
    int reversed=0;
    int original=x;
    x=abs(x);

    while(x>0){
        int digit = x%10;
        reversed=reversed*10+digit;
        x/=10;
    }
    if (reversed == abs(original)){
        cout<<"True";
        
    }
    else{
        cout<<"False";
    }
}