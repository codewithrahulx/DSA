#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>arr , int st ,int end ,int tar){
    int mid=(st+end)/2;
    if(st>end) return -1;
    if(tar>arr[mid]){
        return binarysearch(arr , mid+1 , end,tar);
    }
    else if(tar<arr[mid]){
        return binarysearch(arr , st,mid-1,tar);
    }
    else if(tar==arr[mid]){
        return mid;
    }

}
int main(){
    vector<int>arr={1 ,2 ,3 ,4 ,5 ,7 ,10};
    int target=7;
    int n =arr.size();
    int st =0 , end=n-1;
    int index =binarysearch(arr ,st , end,target);
    if(index==-1){
        cout<<"Your element does'nt found";
    }
    else{
        cout<<"The element found at index:"<<index;
    }
}