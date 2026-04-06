#include <iostream>

using namespace  std;
const int ARRAY_SIZE =3;


int main ( )
{
    int n;
    cin>>n;
    int a[ARRAY_SIZE];
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<ARRAY_SIZE;j++)
        {
            cin>>a[j];
            sum+=a[j];
        }
        if(sum>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
