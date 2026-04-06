#include <iostream>

using namespace std;
void perfect(int x)
{
    if(x%2==0) {
        cout<<x<<" eh perfeito"<<endl;
    }
    else {
        cout<<x<<" nao eh perfeito"<<endl;
    }

}
int main ( )
{
    int t,x,y;
    cin>>t;
    while(t--) {
        cin>>x;
         perfect(x);
    }
    return 0;

}
