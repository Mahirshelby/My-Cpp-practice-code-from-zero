#include <iostream>

using namespace std;

int displayNum(int a ,double b)
{
    cout<< "The int num is "<<a<<endl;
    cout<< "The double num is "<<b<<endl;
    return 2;

}
int main ( )
{
    int n1=4;
    double n2=5.2;
    displayNum(n1,n2);
    return 0;
}
