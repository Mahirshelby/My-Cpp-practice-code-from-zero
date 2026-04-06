#include <iostream>
using namespace std;
string get_username();

int main ( )
{
    string s;
    s=get_username();


   cout<< "Hello, "<<s<<endl;

   return 0;
}

string get_username() {

    string name;
    cout<< "Enter your username \n";
    cin>>name;
    return name;

}
