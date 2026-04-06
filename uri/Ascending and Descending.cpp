#include <iostream>

using namespace std;

int main ( )
{
    int a,b;
    while(true) {
        cin>>a>>b;
        if(a>b) {
            cout<< "Decrescente"<<endl;
        }
        else if(a<b) {
            cout<< "Crescente"<<endl;
        }
        if(a==b) {
            break;
            continue;
        }
    }
    return 0;
}
