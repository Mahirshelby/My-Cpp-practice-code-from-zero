#include <iostream>

using namespace std;

int recursion(int n)
{
    if(n==1) {
        return 1;
    }
    else {
        return n*recursion(n-1);
    }
}

int main ()
{
    int result,n;
    cout<< "Enter any positive number: "<<endl;
    cin>>n;

    result=recursion(n);
    cout<< "Factorial of "<<n<< " = "<<result<<endl;
    return 0;

}
