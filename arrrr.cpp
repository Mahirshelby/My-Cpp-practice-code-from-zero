#include <iostream>

using namespace std;

int main ( )
{
   double arr[]={1,2,3,4,5};
    double count=0;
   double sum=0;
   double avg;

    cout<< "The numbers are: ";

    for(const double &n:arr) {
        cout<<n<< " ";
        sum +=n;
        ++count;
    }
    cout<< "\nTheir sum = "<<sum<<endl;
    avg=sum/count;
     cout<< "\nTheir average = "<<avg<<endl;
     return 0;
}
