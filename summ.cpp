#include <iostream>

using namespace std;

int main ( )
{

  int sum=0;
  int num;
  cout<< "Enter a Num: "<<endl;
  cin>>num;
  while(num>=0) {
    sum+=num;
    cout<< "Enter a num: "<<endl;
    cin>>num;
  }
  cout<<endl<<"The sum is: "<<sum<<endl;
    return 0;
}

