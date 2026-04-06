#include <iostream>
#include <iomanip>
using namespace std;

int main ( )
{
    int count=0,t,c=0,r=0,s=0,a;
    double k,m,o;
    string u;

    cin>>t;
    while(t--) {
        cin>>a>>u;
        count+=a;
        if(u== "C") {
            c+=a;
        }
        else if(u== "R") {
            r+=a;
        }
        else {
            s+=a;
        }

    }
    cout<< "Total: "<<count<<" cobaias"<<endl;
    cout<< "Total de coelhos: "<<c<<endl;
    cout<< "Total de ratos: "<<r<<endl;
    cout<< "Total de sapos: "<<s<<endl;
    k=(100.0/count)*c;
    m=(100.0/count)*r;
    o=(100.0/count)*s;
    cout<< "Percentual de coelhos: "<<fixed<<setprecision(2)<<k<< " %" <<endl;
    cout<< "Percentual de ratos: "<<fixed<<setprecision(2)<<m<< " %"<<endl;
    cout<< "Percentual de sapos: "<<fixed<<setprecision(2)<<o<< " %"<<endl;
    return 0;
}

