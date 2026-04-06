#include <iostream>
#include <algorithm>
using namespace std;

int main ( )
{
    int a,b,c,maxx,minn;
    cin>>a>>b>>c;

    maxx=max({a,b,c});
    minn=min({a,b,c});

    cout<<minn<< " "<<maxx<<endl;

    return 0;
}

