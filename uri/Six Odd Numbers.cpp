
#include <iostream>

using namespace std;

int main ()
{
    int n,count=0;
    cin>>n;
    for(int i=n;count<6;i++) {
        if(i%2==1) {
            cout<<i<<endl;
            count++;
        }
    }
    return 0;
}
