/** implementation **/
/** file: newfraction2.cpp*/
/** Class IMPLEMENTED: fraction (See newfraction2.h for documentation.)*/
#include "newfraction2.h"


fraction::fraction()
{
  num = 0;//constructor initializes value of the fraction if not given by the user
  denom = 1;
}
fraction::fraction(int x,int y)
{
  num = x; //constructor takes fraction  value from the user
  denom = y;
}
void fraction::setNum(int x)
{
  num = x;//sets the numerator
}
void fraction::setDenom(int y)
{
  if (denom !=0)
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
  return num;//returns the numerator
}
int fraction::getDenom()
{
  return denom;//returns the denominator
}
void fraction::display()
{
  if(num>=0 && denom>=0)
    simplify();
  cout<<num<<"/"<<denom;//displays the fraction
}

/**Greatest common divisorz*/
int gcd(int a, int b)
{

  if (a == 0)
    return b;
  if (b == 0)
    return a;
  //Fuction thats helps simplifying fraction
  if (a == b)
    return a;

  if (a > b)
    return gcd(a-b, b);
  return gcd(a, b-a);
}


void fraction::simplify()
{
  int y=gcd(num,denom);//simplifys the fraction
  num/=y;
  denom/=y;
}

fraction fraction::operator+(fraction x)
{
  int numerator,denominator;
  numerator = (x.getNum()*getDenom())+(getNum()*x.getDenom());// addition function using operator
  denominator = x.getDenom()*getDenom();
  fraction temp(numerator,denominator);
  return temp;
}

fraction fraction::operator-(fraction x)
{
  int numerator,denominator;
  numerator = (getNum()*x.getDenom())-(x.getNum()*getDenom());// subtraction function using operator
  denominator = x.getDenom()*getDenom();
  fraction temp(numerator,denominator);
  return temp;
}


/* Multiply function */
fraction operator*( fraction x, fraction y)
{
  int numerator,denominator;
  numerator = (x.getNum()*y.getNum()); //multiplication function using operator
  denominator = x.getDenom()*y.getDenom();
  fraction temp(numerator,denominator);
  return temp;
}

/* Divide Function */
fraction operator/( fraction x, fraction y)
{
  int numerator,denominator;
  numerator = (x.getNum()*y.getDenom()); //division function using operator
  denominator = x.getDenom()*y.getNum();
  fraction temp(numerator,denominator);
  return temp;
}
/**Output function*/
ostream &operator<<( ostream &output, fraction f ) { //function that takes and returns stream object
  if(f.getNum()>=0 && f.getDenom()>=0)
    f.simplify();
  output << f.getNum()<<"/"<<f.getDenom();
  return output;
}
