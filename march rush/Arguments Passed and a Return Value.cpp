#include <iostream>
#include <cmath>
using namespace std;

bool su(int n)
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
     cout << "Enter a positive integer to check: "<<endl;
    cin>>n;
    bool is_prime=su(n);
    if(is_prime== true) {
        cout << n << " is a prime number.";
    }
    else {
        cout << n << " is not a prime number.";
    }
    return 0;
}
