#include<iostream>
using namespace std;
double bionomial(double n ,double r){
    double n1=1,r2=1,nr=1,ncr;
    for(int i =1;i<=n;i++){
        n1*=i;
    }
    for(int j=1;j<=r;j++){
        r2*=j;
    }
    for(int i=1;i<=n-r;i++){
        nr*=i;
    }
    ncr=n1/(r2*nr);
    return ncr;
}
int main(){
    double n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<"bionomial cofficient is :"<<bionomial(n,r);
}