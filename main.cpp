#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include "person.h"
using namespace std;

int main()
{
    int n;
    cout<<"Write numbers of Human"<<endl;
    cin>>n;
    Person * Humans=new Person [n];
    for(int i=0;i<n;i++ ){
        Humans[i].Set();
    }
    for(int i=0;i<n;i++ ){
        Humans[i].Print();
    }
    int answer1,answer2;
    answer1=Gender(Humans,n);
    answer2=n-answer1;
    cout<<"Women :"<<answer2<<endl;
    cout<<"Men   :"<<answer1<<endl;
    return 0;
}
