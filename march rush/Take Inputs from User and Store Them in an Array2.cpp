#include <iostream>

using namespace std;

int main  ( )
{
    int a[5];

    cout<< "Enter 5 numbers: "<<endl;
    for(int i=0;i<5;i++) {
        cin>>a[i];
    }
    cout<< "\nThe numbers are: ";
    for(int i=0;i<5;i++) {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    return 0;
}
