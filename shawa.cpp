#include <iostream>

using namespace std;

int main ( )
{
    int numbers[5]={1,2,3,4,5};

    //ranged base loop
    cout<< "The numbers are: ";
    for(int n:numbers) {
        cout<<n<<" ";

    }
    //traditional for loop

       cout<<endl;
   cout<< "The numbers are: ";
    for(int i=0;i<5;i++) {
        cout<<numbers[i]<< " ";
    }
}
