/*This program demonstrates a fraction class with different functions 
by using the operator method
Mohammad Aryan Khan
py9242yg
09/05/2023
Instructor:Jie Meichsner
*/
#include"newfraction2.h" 
#include <iostream>
using namespace std;
int main()
{
  fraction f1;
  fraction f2;
  cout<<"Enter the first fraction: numerator denominator\n";
  cin>>f1;
  cout<<"Enter the Second fraction: numerator denominator\n";
  cin>>f2;
  cout<<"The two fractions entered are\n";
  cout<<"f1= ";
  cout<<f1;
  cout<<"\nf2= ";
  cout<<f2;

  cout<<"\n\nThe arithmetic operation on these two fractions:\n";
  cout<<"f1+f2=";
  fraction f3;
  f3 = f1+f2;
  cout<<f3;
  cout<<"\nf1-f2=";
  f3 = f1-f2;
  cout<<f3;
  cout<<"\nf1*f2=";
  f3 = f1*f2;
  cout<<f3;
  cout<<"\nf1/f2=";
  f3 = f1/f2;
  cout<<f3;
}
