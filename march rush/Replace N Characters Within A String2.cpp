
#include <iostream>
using namespace std;

int main ( )
{
    string s= "Hello world";
    cout<< "Before: "<<s<<endl;
    s.replace(6,5, "Earth");

    cout<< "After: "<<s<<endl;
    return 0;

}
