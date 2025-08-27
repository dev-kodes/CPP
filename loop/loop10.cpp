#include<iostream>
using namespace std;

int main() {
    int n,i;
    cout<<"Enter the table: ";
    cin>>n;
    for(i=n;i<=10*n;i=i+n) {
        cout<<i<<endl;
    }
    return 0;
};