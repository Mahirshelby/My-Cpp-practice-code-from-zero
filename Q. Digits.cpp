#include <iostream>

using namespace std;

int main ( )
{
    int i,n,t,digit;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n==0) {
            cout<<0<<endl;
            continue;
        }
        while(n>0) {
            digit=n%10;
            cout<<digit;
            n=n/10;
            if(n>0) {
                cout<< " ";
            }
        }
        cout<<endl;

    }
    return 0;
}
