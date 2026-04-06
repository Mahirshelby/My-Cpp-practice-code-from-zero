#include <iostream>

using namespace std;

const int ARRAY_SIZE=5;

void display(int k[])
{
    cout<< "Displaying marks: "<<endl;


    for(int i= 0;i<ARRAY_SIZE;i++) {
        cout<< "Student "<<i+1<< " : "<<k[i]<< " "<<endl;
    }

}
int main  ( )
{
    int a[ARRAY_SIZE]={88, 76, 90, 61, 69};


    display(a);
    return 0;
}
