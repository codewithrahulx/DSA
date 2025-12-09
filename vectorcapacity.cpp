#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout<<vec.size()<<endl;        // elements  3
    cout<<vec.capacity()<<endl;    // capacity  4
    return 0;
}