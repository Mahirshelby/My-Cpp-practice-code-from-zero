#include <iostream>

using namespace std;

void suck(char c = '*',int e=3)
{
    for(int i=1;i<=e;i++) {
        cout<<c;
    }
    cout<<endl;
}
int main ( )
{
    int count=5;
    suck();
    suck('#');
    suck('$',count);
    return 0;

}
