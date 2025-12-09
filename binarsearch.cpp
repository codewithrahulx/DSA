#include<iostream>
#include<vector>
using namespace std;
   int binarysearch(vector<int>arr ,int tar){
    int n =arr.size();
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){         /// if target is greater than mid then check second  half 
            st=mid+1;
        }
        else if(tar<arr[mid]){  /// if target is less then mid then check  first half 
            end=mid-1;
        }
        else if(tar==arr[mid]){
            return mid;
        }
    }
    return -1; // if the target doesn't exsit in array then return -1;

}
int main (){
    vector<int>arr1={-1 , 2 ,3 , 4 ,8 ,9 ,10 };
    int target=10;
    int find =binarysearch(arr1 ,target);
    if(find==-1){
        cout<<"the element doesn't found";
    }
    else{
        cout<<"The target is  found at index:"<<" "<<find;
    }
}