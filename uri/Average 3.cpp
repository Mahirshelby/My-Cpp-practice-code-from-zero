#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    double s;
    s=(n1*2+n2*3+n3*4+n4*1)/(2+3+4+1);
    cout << fixed << setprecision(1);
    cout<<"Media: "<<s<<endl;;

    if(s>=7.0) {
        cout<< "Aluno aprovado."<<endl;
    }
    if(s<5.0) {
        cout<< "Aluno reprovado."<<endl;
    }
    if(s>=5.0 && s<=6.9) {
        cout<< "Aluno em exame."<<endl;
       double exam;
        cin>>exam;
        cout<< "Nota do exame: "<<exam<<endl;;
       double u=(exam+s)/2;
        if(u>=5.0) {
            cout<< "Aluno aprovado."<<endl;
        }
        else{
            cout<< "Aluno reprovado."<<endl;
        }
        cout<< "Media final: "<<u<<endl;

    }
    return 0;

}
