#include <iostream>

using namespace std;
int main ( )
{
    int a[5]={1,2,3,4,5};

    cout<< "The numbers are: ";
    for(int n:a) {
        cout<<n<< " ";
    }
    cout<< "\nThe numbers are: ";
    for(int i=0;i<5;i++) {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    return 0;
}

