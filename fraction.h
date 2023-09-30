#ifndef FRACTION_H
#define FRACTION_H



class fraction
{
 private:
  /**numerator of the fraction*/
  int num;
  /**denominator of the fraction*/
  int denom;
 public:
  /**Constructor;
     /*@pre none
     /*@post intializes the value of the num and denom to default values*/
  fraction();
    
  /**Constructor;
     /*@param int x the numerator of the fraction
     /*@param int y the denominator of the fraction
     /*@pre none
     /*@post takes user input values of x and y*/
  fraction(int x, int y);
    
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


};

#endif
