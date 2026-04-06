#include <iostream>

using namespace std;

int main ( )
{
    int n;
    cin>>n;
    string s[]={ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    if(n>=1 && n<=12) {
        cout<<s[n-1]<<endl;
    }
    return 0;
}
