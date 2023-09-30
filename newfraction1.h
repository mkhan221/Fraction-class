#ifndef NEWFRACTION1_H
#define NEWFRACTION1_H



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
   *@param int x the numerator of the fraction
   *@param int y the denominator of the fraction
   *@pre none
   *@post takes user input values of x and y*/
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
/**non-member function*/
/**Adds two fraction*/
/*@param fraction x which is one of the fraction
/*@param fraction y which the other fraction
/*@pre none
/*@post adds the two fraction and returns a fraction*/
fraction Add( fraction x, fraction y);
/**non-member function*/
/**Subtracts two fraction*/
/*@param fraction x which is one of the fraction
/*@param fraction y which the other fraction
/*@pre none
/*@post Subtracts the two fraction and returns a fraction*/
fraction Sub( fraction x, fraction y);
/**non-member function*/
/**Multiplys two fraction*/
/*@param fraction x which is one of the fraction
/*@param fraction y which the other fraction
/*@pre none
/*@post Multiplys the two fraction and returns a fraction*/
fraction Mul( fraction x, fraction y);
/**non-member function*/
/**Divides two fraction*/
/*@param fraction x which is one of the fraction
/*@param fraction y which the other fraction
/*@pre none
/*@post Divides the two fraction and returns a fraction*/
fraction Div( fraction x, fraction y);
  

#endif
