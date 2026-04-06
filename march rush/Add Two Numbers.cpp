#include <iostream>

using  namespace std;

int g(int a,int b)
{
    return a+b;
}
int main ()
{
    int n;

    n=g(100,78);

    cout<< "100 + 78 = "<<n<<endl;
    return 0;
}
