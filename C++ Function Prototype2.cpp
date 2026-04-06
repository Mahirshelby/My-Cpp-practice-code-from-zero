#include <iostream>

using namespace std;

int func(int,int);

int main ()
{
    int sum;
    sum=func(100,74);

    cout<< "100+74 = "<<sum<<endl;
    return 0;
}
int func (int a,int b)
{
    return (a+b);
}
