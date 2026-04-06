#include <iostream>
using namespace std;
int main ()
{
    int number[5]={1,2,3,4,5};


    cout<< "The  numbers are: ";

    for(int n:number) {
        cout<<n<< " ";
    }

    cout<<endl<< "The  numbers are: ";

    for(int i=0;i<5;i++) {
        cout<<number[i]<< " ";
    }
}
