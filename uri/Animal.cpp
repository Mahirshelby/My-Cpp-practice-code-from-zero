#include <iostream>
#include <string>
using namespace std;

int main ( )
{
    string n,s,t;
    cin>>n>>s>>t;
    string u[]={n,s,t};
    if(u[0]=="vertebrado" && u[1]=="ave" && u[2]== "carnivoro") {
        cout<< "aguia"<<endl;
    }
    else if(u[0]=="vertebrado"&& u[1]=="ave" && u[2]== "onivoro") {
        cout<< "pomba"<<endl;
    }
      else if(u[0]=="vertebrado"&& u[1]=="mamifero" && u[2]== "onivoro") {
        cout<< "homem"<<endl;
    }

     else if(u[0]=="vertebrado"&& u[1]=="mamifero" && u[2]== "herbivoro") {
        cout<< "vaca"<<endl;
    }




    else if(u[0]=="invertebrado"&& u[1]=="inseto" && u[2]== "hematofago") {
        cout<< "pulga"<<endl;
    }

    else if(u[0]=="invertebrado"&& u[1]=="inseto" && u[2]== "herbivoro") {
        cout<< "lagarta"<<endl;
    }

    else if(u[0]=="invertebrado"&& u[1]=="anelideo" && u[2]== "hematofago") {
        cout<< "sanguessuga"<<endl;
    }

    else if(u[0]=="invertebrado"&& u[1]=="anelideo" && u[2]== "onivoro") {
        cout<< "minhoca"<<endl;
    }







   return 0;
}


