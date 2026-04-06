#include <iostream>

using namespace std;

int main ( )
{
    int n;
    cin>>n;
    long long int fib[n];
   fib[0]=0;
    fib[1]=1;

    for(int i=2;i<n;i++) {
        fib[i]=fib[i-2]+fib[i-1];
    }
    for(int i=0;i<n;i++) {
        cout<< "Fib["<<i<< "] = "<<fib[i]<<endl;
    }

    return 0;
}
