#include <iostream>
#include <algorithm>
using namespace std;

int main ( )
{
    string s;
    cin>>s;

    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++) {
        if(s[i]!= '+') {
            cout<<s[i];
            if(i>0 && i<s.size()-1) {
                cout<< "+";
            }
        }
    }
    cout<<endl;
    return 0;
}
