/*This program demonstrates a fraction class with different functions
@file:project1_task1.cpp
Mohammad Aryan Khan
py9242yg
09/05/2023
Instructor:Jie Meichsner
*/
#include "fraction.h"
#include<iostream>
using namespace std;
int main()
{
  int x,y;
  cout<<"Enter the first fraction: numerator and denominator\n";
  cin>>x>>y;
  fraction f1(x,y);
  fraction f2;
  cout<<"Enter the second fraction: numerator and denominator\n";
  cin>>x>>y;
  f2.setNum(x);
  f2.setDenom(y);
  fraction f3;
  fraction f4(10,20);
  cout<<"The two fractions entered are\n";
  cout<<"f1="; 
  f1.display();
  cout<<"\nf2=";
  cout<<f2.getNum()<<"/"<<f2.getDenom()<<"\n";
  cout<<"f3=";
  f3.display();
  cout<<"\nf4=";
  f4.display();
}







