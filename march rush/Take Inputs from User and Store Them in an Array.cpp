#include <iostream>

using namespace std;

int main ( )
{
    int n[5];

    cout<< "Enter 5 number: "<<endl;
    for(int i=0;i<5;i++) {
        cin>>n[i];
    }
    cout<< "The numbers are: ";

    for(int i=0;i<5;i++) {
        cout<<n[i]<< " ";
    }
    cout<<endl;
    return 0;
}
