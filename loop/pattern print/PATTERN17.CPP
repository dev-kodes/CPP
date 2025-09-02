#include <iostream>
using namespace std;
int main() {
    int row, col;
   for(row=1;row<=5;row=row-1) {
       //space print
       for(col=1;col<=5-row;col=col+1)
       cout<<"  ";
       // char print
       for(col=1;col<=row;col=col+1)
       {
           char name = 'A'+col-1;
           cout<<name<<" ";
       }
   cout<<endl;
       
   }
    return 0;
};