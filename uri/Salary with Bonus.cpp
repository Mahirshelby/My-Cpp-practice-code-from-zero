

#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{
    string s;
    cin>>s;
    double a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<< "TOTAL = R$ "<<a+(b/100)*15<<endl;



    return 0;
}
