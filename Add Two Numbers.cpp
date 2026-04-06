#include <iostream>

using namespace std;

int func(int a,int b)
{
    return a+b;

}
int main ( )
{
    int n1=5,n2=4;

    int sum=func(n1,n2);

    cout<< "5+4= "<<sum<<endl;
    return 0;
}
