#include <iostream>

using namespace std;

int main ( )
{
    double n[]={7, 5, 6, 12, 35, 27};

    double count=0;
    double avg;
    double sum;

    cout<< "Numbers are: ";

    for(auto s:n) {
        cout<<s<< " " ;
        count++;
        sum+=s;
    }
    cout<< "\nTheir sum = "<<sum<<endl;
    avg=sum/count;

    cout<< "Their average = "<<avg<<endl;
    return 0;
}
