#include <iostream>

using namespace std;

void say_hello(string name)
{
    cout<< "Hello, "<<name<<endl;

}
int main( )
{
    string n;
    cout<< "Enter your name: ";
    cin>>n;
    say_hello(n);
    return 0;

}
