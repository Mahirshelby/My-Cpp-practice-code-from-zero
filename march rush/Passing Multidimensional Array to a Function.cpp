#include <iostream>

using namespace std;


void display (int a[][2])

{
    cout<< "Displaying values: "<<endl;
    for(int i=0;i<3;++i) {
        for(int j=0;j<2;j++) {
            cout<< "n"<< "["<<i<< "]"<< "["<<j<< "]: "<<a[i][j]<<endl;
        }
    }

}
int main( )
{
    int n[3][2]= {
       {3,4},
       {9,5},
       {7,1}
};

     display(n);
     return 0;

}
