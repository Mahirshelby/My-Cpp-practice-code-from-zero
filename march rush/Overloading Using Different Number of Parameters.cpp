#include <iostream>

using namespace std;

void display(int n1)
{
    cout<< "Integer number: "<<n1<<endl;
}
void display(double n1)
{
    cout<< "double number: "<<n1<<endl;
}

void display(int n1,double n2)
{
    cout<< "Integer number: "<<n1<<endl;
    cout<< "And double number: "<<n2<<endl;
}
int main()
{
    int a=5;
    double b=5.5;

    display(a);
    display(b);
    display(a,b);
    return 0;
}
