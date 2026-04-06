
#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cin>>ch;
    if(islower(ch)) {
        ch=toupper(ch);
        cout<<ch<<endl;
    }
    else {
       ch=tolower(ch);
       cout<<ch<<endl;
    }

    return 0;
}


