#include <iostream>

using namespace std;

int main ( )
{
    string s= "Hello world, beautiful world!";

    cout<< "Before: "<<s<<endl;

    s.erase(7,5);
    cout<< "After: "<<s<<endl;
    return 0;
}
