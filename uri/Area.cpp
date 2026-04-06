

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

    double a,b,c;
   cin>>a>>b>>c;

    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(1/2.0)*a*c<<endl;
    cout<< "CIRCULO: "<<3.14159*c*c<<endl;
    cout<< "TRAPEZIO: "<<(1/2.0)*(a+b)*c<<endl;
    cout<< "QUADRADO: "<<b*b<<endl;
    cout<< "RETANGULO: "<<a*b<<endl;
    return 0;
}
