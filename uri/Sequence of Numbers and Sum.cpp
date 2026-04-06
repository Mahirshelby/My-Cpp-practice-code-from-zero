#include <iostream>

using namespace std;
void func(int,int);

int main ( )
{
    int m,n;

    while(true)
    {
        cin>>m>>n;
        if(m<=0 || n<=0) {
            break;
        }
        func(m,n);

    }
    return 0;



}
void func(int m,int n)
{
    int start,end,sum=0;
    end=max(m,n);
   start=min(m,n);
    for(int i=start;i<=end;i++) {
        sum+=i;
      cout<<i<< " ";
    }
    cout<<"sum="<<sum;
    cout<<endl;


}
