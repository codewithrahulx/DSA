#include<iostream>
using namespace std;
int sumofdigit(int num){
    int digsum=0;
    while(num>0){
        int lastdig=num%10;
        num/=10;
        digsum+=lastdig;
    }
    return digsum;  
}
int main(){
        int n;
        cout<<"Enter numbers:";
        cin>>n;
        cout<<"sum :"<<sumofdigit(n);

    }