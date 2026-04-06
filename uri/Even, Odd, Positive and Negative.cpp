


#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int a[5],count=0,s=0,u=0,t=0;
    for(int i=0;i<5;i++) {
        cin>>a[i];
        if(a[i]%2==0) {
            count++;
        }
        if(a[i]%2 !=0) {
            s++;
        }
        if(a[i]>0) {
            u++;
        }
        if(a[i]<0) {
            t++;
        }
    }
    cout<<count<<" valor(es) par(es)"<<endl;
       cout<<s<<" valor(es) impar(es)"<<endl;
          cout<<u<<" valor(es) positivo(s)"<<endl;
             cout<<t<<" valor(es) negativo(s)"<<endl;

    return 0;
}


