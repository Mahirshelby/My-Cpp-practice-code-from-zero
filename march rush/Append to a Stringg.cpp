#include <iostream>
#include <string>
using namespace std;

int main ( )
{
    string s= "Hello world,";
    cout<< "Before: "<<s<<endl;
    s.append(" Have a good day!");
    cout<< "After: "<<s<<endl;
    return 0;
}
