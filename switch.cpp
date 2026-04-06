#include <iostream>
using namespace std;
int main ( )
{
    char opr;
    cout<< "Enter any operator: ";
    cin>>opr;
    int num1,num2;
    cout<< "Enter Two Number: "<<endl;
    cin>>num1>>num2;
    switch(opr) {

        case '+':
        cout<<num1<< " + "<<num2<< " = "<<num1+num2;
        break;
        case '-':
        cout<<num1<< " - "<<num2<< " = "<<num1-num2;
        break;
        case '*':
        cout<<num1<< " * "<<num2<< " = "<<num1*num2;
        break;
        case '/':
        cout<<num1<< " / "<<num2<< " = "<<num1/num2;
        break;
        default:
        cout << "Error! The operator is not correct";
        break;
    }
    return 0;

}
