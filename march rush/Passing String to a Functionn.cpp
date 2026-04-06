#include <iostream>

using namespace std;
void du(string s)
{
    cout<< "You Entered string: "<<s<<endl;
}
void du(char k[])
{
    cout<< "You Entered char array is: "<<k<<endl;
}

int main ()
{
    string s;
    char ch[100];

    cout<< "Enter a string: "<<endl;
    getline(cin,s);

    cout<< "Enter another string: "<<endl;
    cin.get(ch,100);
    du(s);
    du(ch);

    return 0;
}
