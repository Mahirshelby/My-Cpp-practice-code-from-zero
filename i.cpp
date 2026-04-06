#include <iostream>

using namespace std;

int main ( )
{
    int i,n;
    cin>>n;
    int arr[n];
     for(i=0;i<n;i++) {
        cin>>arr[i];
     }
     int maxx=arr[0];
     for(i=1;i<n;i++) {
        if(arr[i]>maxx) {
        maxx=arr[i];
     }


     }
      cout << "Max = " << maxx << endl;
      return 0;

}
