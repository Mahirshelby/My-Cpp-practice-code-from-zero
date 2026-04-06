
#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{
    int n,s,t,u;
    cin>>n;
    s=n/365;
    t=n%365/30;
    u=(n%365)%30;

    cout<<s<< " ano(s)"<<endl<<t<< " mes(es)"<<endl<<u<< " dia(s)"<<endl;

   return 0;
}

