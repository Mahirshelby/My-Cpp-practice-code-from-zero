#include <iostream>
#include<iomanip>
using namespace std;

int main ( )
{
    double d;
    cin>>d;

    if(d>=0 && d<=400) {
        double r=(15.0/100)*d;
       cout<<fixed<<setprecision(2)<< "Novo salario: "<<d+r<<endl;
       cout<<fixed<<setprecision(2)<< "Reajuste ganho: "<<r<<endl;
       cout<< "Em percentual: 15 %"<<endl;
}  else if(d>=400.01 && d<=800.00) {
       double x=(12.0/100)*d;
        cout<<fixed<<setprecision(2)<< "Novo salario: "<<d+x<<endl;
       cout<<fixed<<setprecision(2)<< "Reajuste ganho: "<<x<<endl;
        cout<< "Em percentual: 12 %"<<endl;
   }
   else if(d>=800.01 && d<=1200.00) {
       double u=(10.0/100)*d;
        cout<<fixed<<setprecision(2)<< "Novo salario: "<<d+u<<endl;
         cout<<fixed<<setprecision(2)<< "Reajuste ganho: "<<u<<endl;
          cout<< "Em percentual: 10 %"<<endl;
   }
   else if(d>=1200.01 && d<=2000.00) {
       double z=(7.0/100)*d;
        cout<<fixed<<setprecision(2)<< "Novo salario: "<<d+z<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<z<<endl;
          cout<<"Em percentual: 7 %"<<endl;
   }
   else  {
       double i=(4.0/100)*d;
        cout<<fixed<<setprecision(2)<< "Novo salario: "<<d+i<<endl;
        cout<<fixed<<setprecision(2)<< "Reajuste ganho: "<<i<<endl;
          cout<< "Em percentual: 4 %"<<endl;
   }
  return 0;

}
