#include <iostream>
using namespace std;

int main() {


  int i,j,t,n;
  cin>>t;
   for(i=1;i<=t;i++) {
    cin>>n;
    long long int fact=1;
    for(j=1;j<=n;j++) {
        fact*=j;
    }
    cout<<fact<<endl;
   }

    return 0;
}
