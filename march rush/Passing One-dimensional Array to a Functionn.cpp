#include <iostream>

using  namespace std;

const int ARRAY_SIZE=5;
void display(int arr[])
{
    cout<< "Displaying marks: "<<endl;
    for(int i=0;i<ARRAY_SIZE;i++) {
        cout<< "Student "<<i+1<< " : "<<arr[i]<<endl;
    }
}
int main ( )
{
    int marks[]={10,20,30,40,50};

    display(marks);

    return 0;

}
