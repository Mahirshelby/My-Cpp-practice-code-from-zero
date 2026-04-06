#include <iostream>

using namespace std;

void dis(string s)
{
    cout<< "Entered string is: "<<s<<endl;
}
void dis(char s[])
{
    cout<< "Entered char array is: "<<s<<endl;
}
int main ( )
{
    string s;
    char ss[100];

    cout<< "Enter a string: "<<endl;
    cin.get(ss,100);
     cin.ignore();


     cout<< "Enter another a string: "<<endl;
     getline(cin,s);

     dis(s);
     dis(ss);

     return 0;
}
