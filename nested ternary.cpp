#include <iostream>

using namespace std;

int main ( )
{
    int num;
    cin>>num;
    string result;

    result=(num==0)? "zero":((num>0)? "positive": "negative");
    cout<< "Number is "<<result<<endl;
    return 0;

}
