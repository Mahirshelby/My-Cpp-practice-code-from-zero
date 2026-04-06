#include <iostream>

using namespace std;

void func(string name);

int main ( )
{
    string name;
    cout<< "Enter your name: "<<endl;
    cin>>name;
    func(name);
    return 0;
}
void func(string name)
{
    cout<< "Hello, "<<name<<endl;
}
