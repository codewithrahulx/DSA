#include<iostream>
#include<vector>
using namespace std;                                                    // vector functio 1. sizwe  2.push_back 3.pop_back  4.front_back  5.back 6.at 
int main (){
    vector<char>vec={ 'a', 'c' ,'d'};

    cout<<"size= "<<vec.size()<<endl;
    for( char i : vec){   // i is a index value not index number 
        cout<<i <<endl; // print the index  value 
    }
    return 0 ;
}