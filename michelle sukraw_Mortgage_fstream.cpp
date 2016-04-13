//*****************************************************************
//Name: Michelle Sukraw
//Date: 4/5/2016
//Version: v1.0
//Program Description: Mortgage: This program calculates the monthly payment
//for a mortgage based on the loan amount, yearly interest, and number
//of years for the mortgage.
//*****************************************************************

#include <iostream>         //access cout
#include <fstream>          //access input and output from files
#include <cmath>            //access power functions
#include <iomanip>          //access manipulators
using namespace std;

int main ()
{
    //Input variables
    float loanAmount;
    float yearlyInterest;
    int numberOfYears;
    ofstream outData;
    ifstream inData;

    //Local variables
    float monthlyInterest;          //Monthly interest rate
    int numberOfPayments;           //Total number of payments
    float payment;                  //Monthly payment

    //Open files
    inData.open("loan.in.txt");
    outData.open("loan.out.txt");

    if ( !inData )
    {
        cout << "Error: Unable to open file." << endl;
        //Close Files
        outData.close();
    }

    else

    {
        //read values
        inData >> loanAmount >> yearlyInterest >> numberOfYears;

        //calculate values
        monthlyInterest = yearlyInterest / 12;
        numberOfPayments = numberOfYears * 12;
        payment = (loanAmount * pow(1 + monthlyInterest, numberOfPayments) * monthlyInterest)/
            (pow(1 + monthlyInterest, numberOfPayments) - 1);

        //Output results
        outData << fixed << setprecision(2) << "Loan Amount:     " << setprecision(2)
            << loanAmount << endl << "Interest Rate:   "
            << setprecision(4) << yearlyInterest << endl
            << "Number of years: " << numberOfYears << endl;
        outData << fixed
            <<"Monthly payment: " << setprecision(2) << payment << endl;

        //Close Files
        inData.close();
        outData.close();
    }
    return 0;
}
