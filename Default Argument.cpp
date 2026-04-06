#include <iostream>

using namespace std;

void func(char = '*',int=3);
int main ( )
{
    int count=5;
    //*,3 will be parameters
    cout<< "No argument passed: ";
    func();
    //#,3 will be parameters
    cout<< "First argument passed: ";
    func('#');
    //5,$ will be parameters
    cout<< "Both arguments passed: ";
    func('$',count);
    return 0;
}
void func(char c,int count)
{
    for(int i=1;i<=count;i++)
    {
        cout<<c;
    }
    cout<<endl;
}
