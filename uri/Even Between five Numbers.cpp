

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int a[5],count=0;
    for(int i=0;i<5;i++) {
        cin>>a[i];
        if(a[i]%2==0) {
            count++;
        }
    }
    cout<<count <<" valores pares"<<endl;
    return 0;
}


