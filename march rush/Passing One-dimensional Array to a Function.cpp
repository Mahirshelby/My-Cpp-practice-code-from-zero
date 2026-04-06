#include <iostream>

using namespace std;

const int array_size=5;

void display(int m[])
{
    cout<< "Displaying marks: "<<endl;
    for(int i=0;i<array_size;i++) {
        cout<< "Student "<<i+1<<" : "<<m[i]<<endl;
    }
}

int main ( )
{
    int marks[array_size]={88, 76, 90, 61, 69};
    display(marks);

    return 0;
}
