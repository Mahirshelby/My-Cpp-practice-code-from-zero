#include <iostream>

using namespace std;

inline void f(int a)
{
    cout<<a<<endl;
}

int main ( )
{
    f(5);
    f(44);
    f(555);
    return 0;
}
