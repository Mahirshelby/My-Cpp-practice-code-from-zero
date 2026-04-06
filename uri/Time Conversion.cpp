
#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{
   int n,t,s,u;
   cin>>n;

   s=n/3600;
   t=(n%3600)/60;
   u=(n%3600)%60;
   cout<<s<< ":"<<t<< ":"<<u<<endl;
   return 0;
}
