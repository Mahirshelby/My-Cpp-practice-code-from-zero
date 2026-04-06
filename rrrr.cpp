#include <iostream>

using namespace std;

int add(int a,int b) {
   return a+b;
}
int main ( )
{
    int sum;
    sum=add(3,4);

    cout<< "3+4 = "<<sum<<endl;
    return 0;
}
