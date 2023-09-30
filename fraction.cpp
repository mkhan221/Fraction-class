
/** file:fraction.cpp*/
/** Class IMPLEMENTED: fraction (See fraction.h for documentation.)*/
#include "fraction.h"
#include <iostream>
using namespace std;

fraction::fraction()
{
  num=0;  //constructor intializes value of fraction if not given by the user
  denom=1;
}
fraction::fraction(int x, int y)
{
  num=x;  //constructor takes fraction value from the user
  denom=y;
}
void fraction::setNum(int x)
{
  num=x; //sets the numerator
}
void fraction::setDenom(int y)
{ if (denom !=0)
    {
      denom=y; //sets the denominator
    }
  else
    {
      cout<<"Denominator cannot be zero."<<endl;
    }
}
int fraction::getNum()
{
  return num; //returns the numerator
}
int fraction::getDenom()
{
  return denom; //returns the denominator
}
void fraction::display()
{
  cout<<num<<"/"<<denom; //displays the fraction
}
