#include <iostream>

using namespace std;

int main ( )
{
    int i,arr[]={100,50,20,10,5,2,1};
    int am;
    cin>>am;
    cout<<am<<endl;
    for(i=0;i<7;i++) {
        int count=am/arr[i];
        cout<<count<<" nota(s) de R$ " <<arr[i]<< ",00"<<endl;
        am=am%arr[i];
    }
    return 0;
}
