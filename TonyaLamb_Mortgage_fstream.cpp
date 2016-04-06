/****************************************************************************************************************/
/** Name: Tonya Lamb
/** Date: 4/5/16
/** Version 1.0
/** Program Name: TonyaLamb_Mortgage_fstream.cpp
/** Program Description: Demonstrates the use of fstream using mortgage information
/****************************************************************************************************************/

#include <fstream>         /** library that ofstream and ifstream **/
#include <cmath>            /** library that has the power function **/
#include <iomanip>          /** library that has manipulators **/
#include <iostream>         /** so I can print error message **/

using namespace std;        /** Allows access to where the libraries make the declarations **/

/** These three variables will be the same (constants)if we are demonstrating cout **/
const  float LOAN_AMOUNT = 50000.00;         /** amount of the loan **/
const float YEARLY_INTEREST = 0.0524;       /** yearly interest rate **/
const int NUMBER_OF_YEARS = 7;               /** number of years **/


int main()                  /** int main is the function that the CPU will call to start the program **/
{
   /** declaration of input variables **/
   float loanAmount;                    /** amount of the loan **/
   float yearlyInterest;                /** yearly interest rate **/
   int numberOfYears;                   /** number of years **/
   ofstream outData;                    /** file for data output **/
   ifstream inData;                     /** file for data input **/


   /** declaration of local variables **/
   float monthlyInterest;       /** monthly interest rate **/
   int numberOfPayments;        /** total number of payments **/
   float payment;               /** monthly payment **/

   /** open files to prepare them for reading from and writing to **/
   inData.open ("loan.in");
   outData.open ("loan.out");


   if( !inData)                 /** make sure the file opened **/
   {
       cout << "Error: Unable to open the file: inData " << endl;
   }


   else
   {
      while ( !inData.eof())                 /** read values from the input file**/
      {

       inData >> loanAmount >> yearlyInterest >> numberOfYears;

       /** calculation of values of the local variables base on the file input **/
       monthlyInterest = YEARLY_INTEREST / 12;
       numberOfPayments = NUMBER_OF_YEARS * 12;
       payment = (LOAN_AMOUNT * pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest)
            / (pow (1 + monthlyInterest, numberOfPayments) - 1);

       /** output results **/
       outData << fixed << "Loan amount:     " << setprecision(2)
               << loanAmount << endl << "Interest rate:   "
               << setprecision(4) << yearlyInterest << endl
               << "Number of years: " << numberOfYears << endl;
       outData << fixed << "Monthly payment: "
               << setprecision(2) << payment << endl;


       /** close files, this is a necessary step when using files **/
       inData.close();
       outData.close();
      }
   }

return 0;

}
