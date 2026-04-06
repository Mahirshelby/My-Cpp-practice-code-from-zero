#include <iostream>

using namespace std;

int main ( )
{
    string s;
    s="Hello world, ";
    cout<< "Before: "<<s<<endl;
    s.replace(6,2, "Earth");
    cout<< "After: "<<s<<endl;

    return 0;
}
