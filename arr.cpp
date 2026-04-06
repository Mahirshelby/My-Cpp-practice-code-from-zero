#include <iostream>

using namespace std;

int main ( )
{
    double sum;
    double av;
    double count;
    double numbers[]={7, 5, 6, 12, 35, 27};

    cout<< "The numbers: ";
    for(const double &n:numbers) {
        cout <<n<< " ";
        count++;
        sum+=n;
    }
    cout<< "\nTheir sum = "<<sum<<endl;
    av=sum/count;
    cout<< "Their avarage = "<<av<<endl;
    return 0;
}
