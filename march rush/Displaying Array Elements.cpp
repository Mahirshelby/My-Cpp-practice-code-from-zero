#include <iostream>

using namespace std;

int main ( )

{

    int n[5]={1,2,3,4,5};

     cout << "The numbers are: ";
    //range based for loop

    for(int i:n) {
        cout<<i<< " " ;
    }
    cout<<endl;

    cout << "The numbers are: ";
    //traditional for loop
    for(int i=0;i<5;i++) {
        cout<<n[i]<< " ";
    }
    cout<<endl;
    return 0;
}
