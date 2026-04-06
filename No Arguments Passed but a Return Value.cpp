#include <iostream>

using namespace std;

string func();
int main ( )
{
    string user=func();
    cout<< "Hello, "<<user<<endl;
    return 0;
}

string func()
{
    string name;
    cout<< "Enter name: ";
    cin>>name;
    return name;
}
