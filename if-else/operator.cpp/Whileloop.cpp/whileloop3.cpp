#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int i= 0;
    while(i<n){
        if(i%2==0){
            cout<<"Even :"<<i<<endl;
        }else{
            cout<<"Odd :"<<i<<endl;
        }
        i++;
    }
    return 0;
};