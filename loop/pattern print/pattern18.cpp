#include <iostream>
using namespace std;
int main()  {
    int row,col;
    for(row=1;row<=4;row=row+1)
    {
        //space print
        for(col=1;col<=4-row;col=col+1) 
            cout<<"  ";
            // Number print
        for(col=1;col<=row;col=col+1)  {
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
};