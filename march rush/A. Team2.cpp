#include <iostream>

using namespace std;
const int ARRAY_SIZE = 3;
int main ( )
{
    int a[ARRAY_SIZE];
    int count=0;
    int n;
    cin>>n;

     for(int i=0;i<n;i++) {
       for(int j=0;j<ARRAY_SIZE;j++) {
        cin>>a[j];
       }
       int sum=0;
       for(int j=0;j<ARRAY_SIZE;j++) {
        sum+=a[j];
       }
       if(sum>=2) {
        count++;
       }

     }
     cout<<count<<endl;


    return 0;
}
