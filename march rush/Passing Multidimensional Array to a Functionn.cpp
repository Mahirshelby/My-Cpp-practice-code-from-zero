#include <iostream>

using namespace std;

void fu(int a[][2])
{
    cout<< "Displaying values: "<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<2;j++) {
            cout<< "Marks are: "<< "n"<< "["<<i<< "]"<< "["<<j<< "]: "<<a[i][j]<<endl;
        }
    }
}
int main ( )
{
    int n[3][2]={

       {1,2},
       {1,2},
       {1,2}

     };
     fu(n);
     return 0;
}
