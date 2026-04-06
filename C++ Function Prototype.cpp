//using function definiton after main() function
//function prototype is decleard before main ()
#include <iostream>

using namespace std;
//function prototype
int func(int,int);

int main ( )
{
    int sum;
    //calling the function and storing
    //the returned value in the sum
    sum=func(100,78);
    cout<< "100+78 = " <<sum<<endl;
    return 0;
}
//function definition
int func(int a,int b)
{
    return (a+b);
}

