#include <iostream>
#include<iomanip>
using namespace std;

int main ( )

{
    int n,i;
    double a,sum=0,count=0;

    while(true) {
        cin>>a;
        if(a>0) {
            count++;
            sum+=a;

        }
        else {
            break;
        }
    }
    cout<<fixed<<setprecision(2);
      cout<<sum/count<<endl;

    return 0;

}

