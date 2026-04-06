#include <iostream>
using namespace std;
int main ()
{
    int n,x,count=0;
    cin>>n;

    for(int i=1;i<=n;i++) {
        cin>>x;
        if(x>=10 && x<=20) {
            count++;
        }
    }
    int s=n-count;

    cout<<count<< " in"<<endl;
    cout<<s<<" out"<<endl;
    return 0;
}

