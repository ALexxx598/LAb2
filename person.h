#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;


class Person
{
 private:
    string surname;
    string name;
    string second_surname;
    string adress;
    int year;
    string number;
    int height;
    int weight;
 public:
    string gender;
    void Print();
    void Set();
    friend int Gender(Person *Humans,int n);
    Person()
    {
       surname=name=second_surname=adress=gender=number='0';
       year=height=weight=0;
    }
};
#endif // PERSON_H
