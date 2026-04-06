#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{
    int d,r,a,b;
    double f;
    cin>>a>>b;
    d=a/b;
    r=a%b;
    f= static_cast<double>(a)/static_cast<double>(b);
    cout<<d<< " "<<r<< " "<<fixed<<setprecision(5)<<f<<endl;

    return 0;

}
