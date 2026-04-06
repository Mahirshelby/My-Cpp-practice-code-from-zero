#include <iostream>

using namespace std;

int main ( )
{
    string s;
    s= "Hello world, world";
    cout<< "Before: "<<s<<endl;
    s.insert(13, "beautiful " );
    cout<< "After: "<<s<<endl;
    return 0;
}
