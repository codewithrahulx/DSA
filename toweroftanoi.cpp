#include<iostream>
using namespace std;
void towerofhanoi(int n ,char from ,char to , char aux){
    if(n==1){
        cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
        return ;
    }
        towerofhanoi(n-1,from ,aux,to);
        cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
        towerofhanoi(n-1 , aux,to,from);

    
}
int main(){
    int n =3;
    towerofhanoi(n ,'A','B','C');
}