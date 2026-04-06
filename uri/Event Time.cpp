#include <iostream>

using namespace std;

int main ( )
{
    int a,b,c,d,e,f,x,y,l1,l2,dura,days,hour,min,second;
    string s;
    char u;
    cin>>s>>x;
    cin>>a>>u>>b>>u>>c;
    cin>>s>>y;
    cin>>d>>u>>e>>u>>f;

    l1=x*86400+a*3600+b*60+c;
    l2=y*86400+d*3600+e*60+f;
    dura=l2-l1;
    days=dura/86400;
    dura=dura%86400;
    hour=dura/3600;
    dura=dura%3600;
    min=dura/60;
    dura=dura%60;
    second=dura;

    cout<<days<< " dia(s)"<<endl;
    cout<<hour<< " hora(s)"<<endl;
    cout<<min<< " minuto(s)"<<endl;
    cout<<second<< " segundo(s)"<<endl;

    return 0;

}
