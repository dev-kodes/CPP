#include <iostream>
using namespace std;

int main() {
    int row,col;

    for(row =1;row <=5;row=row+1) {
// space print 
        for(col = 1; col<=5-row; col=col+1) {
            cout << "  "; }
            // star print
            for(col=1;col<=2*row-1;col=col+1)  {
                cout<<'*'<<" ";
            }
    cout<<endl;
    }
    return 0;
    };
    