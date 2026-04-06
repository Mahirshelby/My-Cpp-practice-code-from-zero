
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{

    int a,b,c;

   cin>>a>>b>>c;
   int n=abs(a-b);
    int s=(((a+b)+n)/2+c+abs((a+b+n)/2-c))/2;
    cout<<s<< " eh o maior"<<endl;
    return 0;
}
