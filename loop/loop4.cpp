#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i=i+1) {
      if(i%2==0)
      {
          cout<<"even: "<<i<<" "<<endl;
      }
      else
      {
          cout<<"odd number: " <<i<<endl;
      }
     
  }
    return 0;
};