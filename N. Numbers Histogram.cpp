#include <iostream>
using namespace std;
int main ( )
{
    char s;
    cin>>s;
    int n,xi;
    cin>>n;
    while(n--) {
        cin>>xi;
        for(int i=1;i<=xi;i++) {
              cout<<s;
        }
        cout<<endl;
    }
    return 0;
}
