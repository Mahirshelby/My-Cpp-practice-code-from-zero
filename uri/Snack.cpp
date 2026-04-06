#include <iostream>

#include<iomanip>
using namespace std;

int main ( )
{
    double x,y;
    cin>>x>>y;
    cout<<fixed<<setprecision(2);
    if(x==1) {
        cout<< "Total: R$ "<<y*4<<endl;
    }
    if(x==2) {
        cout<< "Total: R$ "<<y*4.50<<endl;
    }
      if(x==3) {
        cout<< "Total: R$ "<<y*5.00<<endl;
    }
      if(x==4) {
        cout<< "Total: R$ "<<y*2.00<<endl;
    }
      if(x==5) {
        cout<< "Total: R$ "<<y*1.50<<endl;
    }






    return 0;


    }


