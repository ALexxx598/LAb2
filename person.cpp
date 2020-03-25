#include "person.h"
#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int Gender(Person *Humans,int n){
    int local=0;
    string str="male";
    for(int i=0;i<n;i++){
      if(Humans[i].gender==str){
          local+=1;
        }
       }
    return local;
}
void Person::Set()
{
    cout<<"Write Surname"<<endl;
    cin>>surname;
    cout<<"Write Name"<<endl;
    cin>>name;
    cout<<"Write second_surname"<<endl;
    cin>>second_surname;
    cout<<"Write adress"<<endl;
    cin>>adress;
    cout<<"Write year"<<endl;
    cin>>year;
    cout<<"Write number"<<endl;
    cin>>number;
    cout<<"Write height"<<endl;
    cin>>height;
    cout<<"Write weight"<<endl;
    cin>>weight;
    cout<<"Write Gender"<<endl;
    cin>>gender;
    cout<<endl;
}

void Person::Print()
{
  cout<<"Surname         :"<<surname<<endl;
  cout<<"Name            :"<<name<<endl;
  cout<<"Second_surname  :"<<second_surname<<endl;
  cout<<"Adress          :"<<adress<<endl;
  cout<<"Year            :"<<year<<endl;
  cout<<"Number          :"<<number<<endl;
  cout<<"Height          :"<<height<<endl;
  cout<<"Weight          :"<<weight<<endl;
  cout<<"Gender          :"<<gender<<endl<<endl;
}
