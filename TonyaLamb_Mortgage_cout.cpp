/****************************************************************************************************************/
/** Name: Tonya Lamb
/** Date: 4/5/16
/** Version 1.2
/** Program Name: TonyaLamb_Mortgage_cout.cpp
/** Program Description: Demonstrates the use of cout using mortgage information already specified in the program
/****************************************************************************************************************/

#include <iostream>         /** library that has cout and cin **/
#include <cmath>            /** library that has the power function **/
#include <iomanip>          /** library that has manipulators **/

using namespace std;        /** Allows access to where the libraries make the declarations **/

/** These three variables will be the same (constants) for our demonstration of cout **/
const  float LOAN_AMOUNT = 50000.00;         /** amount of the loan **/
const float YEARLY_INTEREST = 0.0524;       /** yearly interest rate **/
const int NUMBER_OF_YEARS = 7;               /** number of years **/


int main()                  /** int main is the function that the CPU will call to start the program **/
{

   /** declaration of local variables **/
   float monthlyInterest;       /** monthly interest rate **/
   int numberOfPayments;        /** total number of payments **/
   float payment;               /** monthly payment **/


   /** calculation of values of the local variables base on the constants **/
   monthlyInterest = YEARLY_INTEREST / 12;
   numberOfPayments = NUMBER_OF_YEARS * 12;
   payment = (LOAN_AMOUNT * pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest)
        / (pow (1 + monthlyInterest, numberOfPayments) - 1);


   /** output results **/
   cout << fixed << setprecision(2) << "For a loan amount of "
        << LOAN_AMOUNT << " with an interest rate of " << setprecision (4)
        << YEARLY_INTEREST << " and a " << NUMBER_OF_YEARS
        << " year mortgage, " << endl;
   cout << "your monthly payments are $" << setprecision (2) << payment
        << "." << endl;


return 0;

}



