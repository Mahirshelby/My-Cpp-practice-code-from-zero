#include <iostream>
#include <iomanip>
using namespace std;
int main ( )
{
    double s,i,m,n,z,y,k,x,r,d,e,l,u;
    cin>>s;
    if(s>=0.00 && s<=2000.00) {
        cout<< "Isento"<<endl;
    }
    else if(s>=2000.01 && s<=3000.00) {
         i=s-2000.00;
        m=(8/100.0)*i;
       cout<<fixed<<setprecision(2)<< "R$ "<<m<<endl;
    }
    else if(s>=3000.01 && s<=4500.00) {
         n=s-3000.00;
        z=s-n-2000.00;
        y=(8/100.00)*z;

        k=(18/100.00)*n;
        cout<<fixed<<setprecision(2)<<"R$ "<<y+k<<endl;

    }
    else {
        x=s-2000.00;

        d=(8/100.00)*1000.00;

        e=(18/100.00)*1500.00;
        l=(28/100.00)*(s-4500.00);
         cout<<fixed<<setprecision(2)<<"R$ "<<d+e+l<<endl;
    }
    return 0;
}
