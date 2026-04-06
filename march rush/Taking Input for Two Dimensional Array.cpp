#include <iostream>

using namespace std;

int main ( )
{
    int a[2][3];
    cout<< "Enter 6 numbers: "<<endl;
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            cin>>a[i][j];
        }
    }
    cout<< "Number are: "<<endl;
    for(int i=0;i<2;++i) {
        for(int j=0;j<3;j++) {
            cout<< "Numbers["<<i<< "]["<<j<< "] = "<<a[i][j]<<endl;
        }
    }
    return 0;

}
