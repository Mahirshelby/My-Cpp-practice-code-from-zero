#include <iostream>

using namespace std;

bool func(int n);

int main ()
{
    int n;
    cout<< "Enter a positive integer to check: ";
    cin>>n;
    int s=func(n);
    if(s==true) {
        cout<<n<< " is a prime number"<<endl;
    }
    else {
        cout<< n<<" is not a prime number"<<endl;
    }
    return 0;

}
bool func(int n)
{
    if(n==0 || n==1) {
        return false;
    }
    for(int i=2;i<=n/2;i++) {
        if(i%2==0) {
            return false;
        }
    }
    return true;

}

