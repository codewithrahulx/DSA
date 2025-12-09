#include<iostream>
using namespace std;
int partition(int A[],int lb,int ub){
    int privot=A[lb];
    int start =lb;
    int end =ub;

    while (start<end){
        while (A[start]<=privot){
            start ++;
        }
        while(A[end]>=privot){
            end--;
        }
        if(start<end){
            swap(A[start],A[end]);
        }
        
    swap(A[lb],A[end]);
    return end;
    }

    
}
int main(){
    return 0;
}