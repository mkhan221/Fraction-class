/*This program demonstrates a fraction class which performs different arithmetic calculations
  on two fractions*/
/*Mohammad Aryan Khan
py9242yg
09/05/2023
Instructor:Jie Meichsner
*/
#include "newfraction1.h"
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
  cout<<"The two fractions entered are:\n";
  cout<<"f1="; 
  f1.display();
  cout<<"\nf2=";
  cout<<f2.getNum()<<"/"<<f2.getDenom()<<"\n";
 
  cout<<"\nThe arithmetic operations on these two fractions:\n";
  cout<<"f1 + f2 = ";Add(f1,f2).display();
  cout<<"\nf1 - f2 = ";Sub(f1,f2).display();
  cout<<"\nf1 * f2 = ";Mul(f1,f2).display();
  cout<<"\nf1 / f2 = ";Div(f1,f2).display();
}


