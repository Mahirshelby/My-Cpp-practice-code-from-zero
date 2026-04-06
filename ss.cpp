#include <iostream>

using namespace std;

int main ( )
{
    int i,n,maxx,minn,arr[n];

    cin>>n;
    for(i=0;i<n;i++ ) {
        cin>>arr[i];
    }
      maxx=arr[0];
      minn=arr[0];
      for(i=1;i<n;i++) {
        if(arr[i]>maxx) {
            maxx=arr[i];
        }
        if(arr[i]<minn) {
            minn=arr[i];
        }
      }
      cout<<maxx<<endl;
      cout<<minn<<endl;
      return 0;
}
