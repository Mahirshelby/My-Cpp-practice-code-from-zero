#include <iostream>
#include <cmath>
using namespace std;

bool check_prime(int n)
{
  if(n==0 || n==1) {
    return false;
  }
  else {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            return false;
        }
    }
  }
  return true;
}
int main ( )
{
      int n;
    cout<< "Enter a positive interger to check: "<<endl;
    cin>>n;
    bool is_prime= check_prime(n);
    if(is_prime==true) {
        cout<<n<< " is a prime number."<<endl;
    }
    else {
        cout<<n<< " is not a prime number."<<endl;
    }
    return 0;
}
