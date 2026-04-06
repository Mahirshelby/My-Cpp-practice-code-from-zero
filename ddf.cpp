#include <iostream>
#include <iomanip>
using namespace std;
void func(double x,double y)
{
   if(y!=0) {
    double s=x/y;
    cout<<fixed<<setprecision(1)<<s<<endl;
   }
   else {
    cout<< "divisao impossivel"<<endl;
   }
}
int main ( )
{
     double x,y,t;
    cin>>t;
   while(t--) {
    cin>>x>>y;
     func(x,y);
   }

    return 0;
}
