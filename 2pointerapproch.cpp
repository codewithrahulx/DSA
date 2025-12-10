#include<iostream>
#include<vector>
using namespace std ;
vector<int>pairsum(vector<int>num ,int target ){
    vector<int>ans;
    int n=num.size();
    int i=0 ,j=n-1;
    while(i<j){
        int pairsum=num[i]+ num[j];
        if(pairsum>target){
            j--;
        }
        else{
            i++;
        }
            
        ans.push_back(i);
        ans.push_back(j);
        return ans ;
    }
    return {} ;
}
int main (){
    vector<int>num={2 ,7,11,15};;
    int target=26;
    vector<int>ans=pairsum(num ,target);
    cout<<ans[0]<<","<<ans[1];
    return 0 ;
}