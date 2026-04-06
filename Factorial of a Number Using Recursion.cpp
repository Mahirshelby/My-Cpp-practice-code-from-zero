#include <iostream>

using namespace std;

int f(int);

int main ( )
{
    int a,result;
    cout<< "Enter a positive number: ";
    cin>>a;
    result=f(a);
  cout << "Factorial of " << a << " = " << result;
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
