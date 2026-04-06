#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main ( )
{
    double a,b,c,del,R1,R2;

    cin>>a>>b>>c;

    del=(b*b-4*a*c);
    if(del<0 || a==0) {
        cout<< "Impossivel calcular"<<endl;
    }
    else {
        R1=((-b+sqrt(del))/(2*a));
        R2=((-b-sqrt(del))/(2*a));



        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<R1<<endl;
        cout<<"R2 = "<<R2<<endl;



    }
    return 0;

}
