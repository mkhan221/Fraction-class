/** file:fraction.cpp*/
/** Class IMPLEMENTED: fraction (See newfraction1.h for documentation.)*/
#include "newfraction1.h"
#include <iostream>
using namespace std;

fraction::fraction()
{
  num=0;  //constructor initializes value of the fraction if not given by the user
  denom=1;
}
fraction::fraction(int x, int y)
{
  num=x;  //constructor takes fraction  value from the user
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

fraction Add(fraction x,fraction y)
{
  int numerator,denominator;
  numerator=(x.getNum()*y.getDenom())+(y.getNum()*x.getDenom()); //addition functiom
  denominator=x.getDenom()*y.getDenom();
  fraction temp(numerator,denominator);
  return temp;
    
}
fraction Sub(fraction x, fraction y)
{
  int numerator,denominator;
  numerator = (x.getNum()*y.getDenom())-(y.getNum()*x.getDenom()); //subtraction functiom
  denominator = x.getDenom()*y.getDenom();
  fraction temp(numerator,denominator);
  return temp;
}
fraction Mul(fraction x, fraction y)
{
  int numerator,denominator;
  numerator = (x.getNum()*y.getNum());  //multiplication functiom
  denominator = x.getDenom()*y.getDenom();
  fraction temp(numerator,denominator);
  return temp;
}
fraction Div(fraction x, fraction y)
{
  int numerator,denominator;
  numerator = (x.getNum()*y.getDenom());  //Division function
  denominator = x.getDenom()*y.getNum();
  fraction temp(numerator,denominator);
  return temp;

}
