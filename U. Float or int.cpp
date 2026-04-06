#include <iostream>
#include <cmath>
using namespace std;

int main ( )
{
    double n;
    cin>>n;
    if(n== floor(n)) {
        cout<< "int "<<static_cast<int>(n)<<endl;
    }
    else {
         int d=static_cast<int>(n);
         double s=n-d;
         cout<< "float "<<d<< " "<<s<<endl;
    }
    return 0;
}
