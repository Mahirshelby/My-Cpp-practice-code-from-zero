#include <iostream>

using namespace std;

int fuuu(int i)
{
    if(i<0) {
        i=-i;

    }
    return i;
}
float fuuu(float i)
{
    if(i<0.0) {
        i=-i;

    }
     return i;
}
int main ( )
{
     // call function with int type parameter
    cout<< "Absolute value of -5 = "<<fuuu(-5)<<endl;
     // call function with float type parameter
    cout<< "Absolute value of 5.5 = "<<fuuu(5.5f)<<endl;
    return 0;
}
