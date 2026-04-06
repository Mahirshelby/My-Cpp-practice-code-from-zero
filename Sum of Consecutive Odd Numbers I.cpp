#include <iostream>

using namespace std;

int main ( )
{
    int x,y,i,count=0;
    cin>>x>>y;
    for(i=y+1;i<=x-1;i++) {
        if(i%2!=0) {
            count+=i;
        }
    }
    cout<<count<<endl;
    return 0;
}
