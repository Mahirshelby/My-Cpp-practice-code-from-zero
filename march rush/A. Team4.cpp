#include <iostream>

using namespace std;
const int s=3;
int main ( )
{
    int n;
    cin>>n;


     int a[s];
      int count=0;
     for(int i=0;i<n;i++) {
        for(int j=0;j<s;j++) {
            cin>>a[j];
        }
           int sum=0;
        for(int j=0;j<s;j++)
        {
            sum+=a[j];
        }

        if(sum>=2) {
            count++;
        }
     }
     cout<<count<<endl;
     return 0;
}
