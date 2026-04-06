#include <iostream>

using namespace std;

int main  ( )
{
    string s;
    s= "Hello sraya,Hello world";

    cout<< "String: "<<s<<endl;

    size_t a=s.find("sraya");
     size_t b=s.rfind("world");

     cout<<a<<endl;
          cout<<b<<endl;
          return 0;
}
