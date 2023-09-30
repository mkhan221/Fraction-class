#ifndef NEWFRACTION2_H
#define NEWFRACTION2_H
#include<iostream>
using namespace std;
/*Declaration of class named fraction*/
class fraction
{
 private:
  /**numerator of the fraction*/
  int num;
  /**denominator of the fraction*/
  int denom;

 public:
  /**Constructor;
   *@pre none
   *@post initializes the value of the num and denom*/
  fraction();
  
  /**Constructor;
     /*@param int x the numerator of the fraction
     /*@param int y the denominator of the fraction
     /*@pre none
     /*@post takes user input values of x and y*/
  fraction(int x,int y);
  
  /**Member function*/
  /** Sets the numerator
      /*@param int x the value of the numerator
      /*@pre none
      /*@post the numerator has been set to a particular value*/
  void setNum(int x);
  
  /**Member function*/
  /** Sets the denominator*/
  /*@param int y the values of the denominator
    /*@pre none
    /*@post the denominator has been set to a particular value*/
  void setDenom(int y);
  
  /**Member function*/
  /**returns the numerator*/
  /*@pre none
    /*@post the value returned is the numerator*/
  int getNum();
  
  /**Member function*/
  /**returns the denominator*/
  /*@pre none
    /*@post the value returned is the denominator*/
  int getDenom();
  
  /**Member function*/
  /**Displays a fraction*/
  /*@pre none
    /*@post displays a fraction*/
  void display();
  
  /**Member function*/
  /** simplifys the fraction*/
  /*pre none*/
  /*post after fraction input is received it simplifys it*/
  void simplify();
  
  /**Member function*/
  /**Adds two fraction*/
  /*@param fraction x the values of the two fraction*/
  /*@pre none
    /*@post computes the addition of two fractions*/
  fraction operator+(fraction x);
  
  /**Member function*/
  /**Subtracts two fraction*/
  /*@param fraction x the values of the two fraction*/
  /*@pre none
    /*@post computes the subtraction of two fractions*/
  fraction operator-(fraction x);
  
  /**Friend function*/
  /** function for taking inputs*/
  /*@param istream &input takes user input
    /*@param fraction &f stores the input as fraction object*/
  /*@pre none*/
  /*@post takes input from user and stores it as fraction object*/
  friend istream &operator>>( istream &input, fraction &f ){
    input>>f.num>>f.denom;
    return cin;
  }
};

/**Non-member function*/
/** Multiplys two fraction*/
/*@param fraction x one of the fractions*/
/*@param fraction y the other fraction*/
/*@pre none*/
/*@post computes the multiplication of two fractions*/
fraction operator*( fraction x, fraction y);

/**Non-member function*/
/** Divides two fraction*/
/*@param fraction x one of the fractions*/
/*@param fraction y the other fraction*/
/*@pre none*/
/*@post computes the division of two fractions*/
fraction operator/( fraction x, fraction y);

/**Non-member function*/
/**find the greatest common divisor between two values*/
/*@param int a first value
  /*@param int b second value
  /*@pre none
  /*@post finds gcd to help simplify the fraction*/
int gcd(int a, int b);

/**Non-member function*/
/**Outputs the resutls*/
/*@param ostream &output 
  /*@param fraction 
  /*@pre none*/
/*@post function that takes and returns stream object*/
ostream &operator<<( ostream &output, fraction f ) ;

#endif
