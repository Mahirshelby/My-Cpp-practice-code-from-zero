#include <iostream>

using namespace std;

int main ( )
{
    int i;
    int numbers[5]={2,5,6,3,2};

    cout<< "The numbers are: ";
    for(int n:numbers) {
        cout<<n<<" ";
    }
    cout<< "\nThe numbers are: ";
    for(i=0;i<5;i++) {
        cout<<numbers[i]<< " ";
    }
    return 0;
}
