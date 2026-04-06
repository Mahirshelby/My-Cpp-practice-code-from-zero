#include <iostream>

using namespace std;

int main ( )
{
    double a[5]={1,2,3,4,5};
    double sum=0;
    double count=0;
    double avg;

  cout<< "The numbers are: ";
    for(const double &n:a) {
        cout<<n<< " ";
        sum+=n;
        count++;
    }
    cout<< "\nTheir sum: "<<sum<<endl;
    avg=sum/count;

    cout<< "Their average: "<<avg<<endl;
    return 0;
}
