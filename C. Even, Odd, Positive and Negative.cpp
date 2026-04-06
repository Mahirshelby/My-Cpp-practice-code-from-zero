
#include <iostream>

using namespace std;
int main ( )
{
    int n,a,count=0,s=0,u=0,k=0;
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a;
        if(a%2==0) {
            count++;
        }
        if(a%2!=0) {
            s++;
        }
        if(a>0) {
            u++;
        }
        if(a<0) {
            k++;
        }
    }
    cout<< "Even: "<<count<<endl;
    cout<< "Odd: "<<s<<endl;
    cout<< "Positive: "<<u<<endl;
    cout<< "Negative: "<<k<<endl;


    return 0;
}

