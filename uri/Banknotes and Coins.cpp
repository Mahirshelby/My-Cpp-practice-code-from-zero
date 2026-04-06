#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double n;
    cin>>n;

    int notes[]={10000,5000,2000,1000,500,200};
    int coin[]={100,50,25,10,5,1};
    cout<< "NOTAS:"<<endl;
    int v= (int)(n*100+0.5);

    for(int i=0;i<6;i++) {
        int count=v/notes[i];
        cout<<count<< " nota(s) de R$ "<<fixed<<setprecision(2)<<notes[i]/100.0<<endl;
        v=v%notes[i];
    }
    cout<< "MOEDAS:"<<endl;
    for(int i=0;i<6;i++) {
        int count=v/coin[i];
        cout<<count<< " moeda(s) de R$ "<<fixed<<setprecision(2)<<coin[i]/100.0<<endl;
        v=v%coin[i];
    }
    return 0;

}
