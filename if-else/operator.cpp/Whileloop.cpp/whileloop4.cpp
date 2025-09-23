#include <iostream>
using namespace std;
int main()  {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int i=1;  // initialize
    do{
        cout<<i*n<<endl;
        i++;  // update
    } while(i<=10); // break
    return 0;
};