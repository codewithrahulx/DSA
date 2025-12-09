#include<iostream>
using namespace std;

double sum(double a ,double b){
    double s = a + b;
    return s;
}

double sub(double a ,double b){
    double n = a - b;
    return n;
}

int main(){
    double a ,b;
    cout << "Enter first number :";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;

    cout << "sum :" << sum(a,b)<<"\n";
    cout << "sub :" << sub(a,b);

    return 0;
}
