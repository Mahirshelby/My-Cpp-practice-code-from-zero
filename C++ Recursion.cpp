#include <iostream>
using namespace std;

int f(int);

int main ()
{
    int a,r;
    cout<< "Enter a positive number: ";
    cin>>a;
    r=f(a);
    cout<< "Factorial of "<<a<< " is: "<<r<<endl;
    return 0;
}
int f(int n)
{
    if(n>1) {
        return n*f(n-1);
    }
    else {
        return 1;
    }
}
