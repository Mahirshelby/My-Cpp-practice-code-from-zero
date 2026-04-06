#include <iostream>

using namespace std;

int main ( )
{
    int mark;
    cin>>mark;
    string result = (mark>=40)? "passed": "Fail";
    cout<< "You "<<result<< " the exam";
    return 0;
}
