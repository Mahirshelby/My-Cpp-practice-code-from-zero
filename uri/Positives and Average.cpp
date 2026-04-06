
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double s[6];
    int count=0;
    double sum=0;
   for(int i=0;i<6;i++ ){
    cin>>s[i];
    if(s[i]>0) {
        count++;
       sum+=s[i];
    }
   }
   cout<< count<<" valores positivos"<<endl;
   cout<<fixed<<setprecision(1);
   cout<<sum/count<<endl;
    return 0;
}


