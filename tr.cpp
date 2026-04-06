#include <iostream>

using namespace std;

int main ( )
{
    int i,n,even=0,odd=0,s;

    cin>>n;
    for(i=1;i<=n;i++) {
        cin>>s;
        if(s%2==0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout<<even<<endl;
    cout<<odd<<endl;

      return 0;
}

