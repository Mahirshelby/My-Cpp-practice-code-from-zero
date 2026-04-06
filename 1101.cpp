#include <iostream>

using namespace std;
int f();
int main ( )
{
     int r=f();

   cout<< "sum="<<r<<endl;
  return 0;
}
int f()
{
     int m,n,s=0;
     while (true) {
        cin>>m>>n;



    if(m>n) {
        for(int i=n;i<=m;i++) {
            s+=i;
        }
    }
     }
   return s;
}
