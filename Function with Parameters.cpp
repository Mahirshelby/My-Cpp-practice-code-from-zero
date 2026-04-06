#include <iostream>

using namespace std;
void func(int a,double b)
{
    cout<< "The int number is "<<a<<endl;
     cout<< "The double number is "<<b<<endl;
}
int main ( )
{
    int n1=5;double n2=5.5;

    func(n1,n2);
    return 0;
}
