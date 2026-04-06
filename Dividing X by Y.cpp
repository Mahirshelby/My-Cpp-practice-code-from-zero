#include <iostream>
#include <iomanip>
using namespace std;

void func(double x,double y)
{
     if(y!=0) {
           double  s=  x/y;
          cout << fixed << setprecision(1) <<s<<endl;
        }
        else {
            cout<< "divisao impossivel"<<endl;
        }

}
int main ( )
{
    int n;
    cin>>n;
     double x,y;
    for(int i=0;i<n;i++) {
        cin>>x>>y;
        func(x,y);

    }
    return 0;

}
