#include<iostream>
#include<vector>
using namespace std;\
int search(vector<int>arr , int tar){
    int n =arr.size();
    int st=0 , end=n-1;
    while(st<=end){
        int mid= (st+end)/2;
        if(arr[mid]==tar) return mid;
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar && arr[mid]>=tar){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(arr[mid]<=tar && arr[end]>=tar){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
    }
    return -1;
}
int main (){
    vector<int>arr={3,4,5,6,7,0,1,2};
    int target=0;
    int index=search(arr , target);
    if(index==-1){
        cout<<"The element doesn't exist on the array";
    }
    else{
        cout<<"The element is  found at index :"<<index;
    }

}