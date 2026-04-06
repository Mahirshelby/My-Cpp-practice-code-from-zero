#include <iostream>
#include<iomanip>
using namespace std;

int main ( )
{
   int  d,m,dd,y;
   cin>>d;

  y=d/365;

   m=d%365/30;
   dd=d%365%30;


   cout<<y<< " years"<<endl<<m<< " months"<<endl<<dd<< " days"<<endl;
    return 0;
}


