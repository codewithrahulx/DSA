#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>vec;
    cout<<"size="<<vec.size()<<endl;
    vec.push_back (20);
    vec.push_back (25);
    vec.push_back (80);
    cout<<"size after pushback="<<vec.size()<<endl;
    vec.pop_back();
    //for(int i :vec){
      ///  cout<<i<<endl;
    //}
    cout<<vec.front()<<endl;
    cout<<vec.back();
    return 0;
}