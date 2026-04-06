#include <iostream>

using namespace std;

int re(int n)
{
    if(n==1) {
        return 1;
    }
    else {
        return n*re(n-1);
    }
}
int main ()
{
    int n,result;
    cout<< "Enter any positive number: ";
    cin>>n;
    cout<<endl;
    result=re(n);
    cout<< "Factorial of "<<n<< " = "<<result<<endl;
    return 0;
}
