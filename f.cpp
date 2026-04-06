#include <iostream>

using namespace std;
//defining the default arguments
void func(char c='*',int count=3)
{
    for(int i=1;i<=count;i++)
    {
        cout<<c;
    }
    cout<<endl;
}



int main ( )
{
    int count =5;
    cout<< "No argument passed: ";
     //*,3 will be parameters
     func();
     cout<< "First argument passed: ";
     //#,3 will be parameters
     func('#');
     cout<< "Both arguments passed: ";
     //$,5 will be parameters
     func('$',count);
     return 0;

}



