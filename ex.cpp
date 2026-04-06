#include <iostream>

using namespace std;

int main ( )
{



int arr[5];

cout<<"Enter 5 number: "<<endl;
for(int i=0;i<5;i++) {
    cin>>arr[i];
}
cout<< "The numbers are: ";
for(int j=0;j<5;j++) {
    cout<<arr[j]<< " ";
}

return 0;

}
