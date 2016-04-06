/************************************************************************************************
// Name: It's an Algorithm , Joseph, James, Michelle, Tonya, Eva Contributors
// Group Project CS110 Prof Looms
// Date: 3_22_2016
// Version: 15
// Program Name: FactFun
// Program Description: Helps students practice multiplication facts
//************************************************************************************************/


/** Directions to the preprocessor **/

#include <cmath>                   /** Library for the math functions **/
#include <iostream>                /** Library for cout, cin **/
#include <stdlib.h>                /** Library for random number generator **/
#include <time.h>                  /** Library allows access to random functions **/
#include <limits>                  /** Library for numeric limits and types **/
#include <string>                  /** Library for string and getline **/

using namespace std;               /** Allows access to where the libraries make the declarations **/

 int getInt()                    /** getInt is a function that validates that what is entered for guess is a number **/
	{
	int guess=0;

	while (!(cin >> guess))
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << endl;
		cout << "Oh No! Something's not right!" << endl;
		cout << "I cannot understand you unless you enter a number. Try again!" << endl << endl;
        }
	return (guess);
	}



/** int main is the function that the CPU will call to start the program **/

	int main ()
{

/** This section is for declarations of the variables **/

	string again;                 /** again is a string that will hold the y or n answer**/
	int a;                        /** a is the first integer for the math problem **/
	int b;                        /** b is the second integer for the math problem **/
	int answer;                   /** answer will be the computer programs solution and will be an integer**/
    const string stry = "y";      /** Using constant strings and getline is part of validating y or n input **/
    const string strY = "Y";
    const string strn = "n";
    const string strN = "N";



        /** Welcomes the student to Fact Fun Math Trainer **/

        cout << "Welcome to FactFun Math Trainer." << endl  << endl;
        cout << "I'm PRODUCTO, your FactFun Personal Tutor." << endl;
        cout << "I'm here to help you be a star at multiplication. Let's practice!" << endl << endl;

    	cout << "While we practice, don't forget to hit Enter each time you answer me." << endl << endl;

    	cout << "Let's get started!" << endl << endl;


	again = 'y';      /** Initializes the value of the variable again as 'y' and allows the loop to run for the first time **/


	while ((again == stry) || (again == strY))  /** This while loop keeps the program giving problems as long as the student replies with a y or Y **/
	{
		srand ( time(NULL) );                   /** Random number generator. produces 0-12 **/
		a = rand() % 13;                        /** Limits both a and b variable to be less than 13 **/
		b = rand() % 13;
        answer = a * b;                         /** Calculates the correct answer **/

        cout << "Try this onene: " << a << " x " << b << " = " << endl;   /** Prints a problem**/


        int guess = getInt();                   /** calls getInt function to verify an integer is entered and returns it as guess**/

        while (answer != guess)     /** This loop lets the student keep trying until they get the problem correct **/
            {

            cout <<  endl;
            cout << "Uh Oh! I think I stumped you!" << endl;
			cout << "I know you can do it if you put your thinking cap on!" << endl;
			cout << "If you want to try again enter y, but if you need to come back later enter n:" << endl;
			getline(cin,again);

                if ((again == stry) || (again == strY))
                {
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << "Try again! " << a << " x " << b << " = ";
                    cin >> guess;
                }

                else if ((again == strn) || (again == strN))
                {
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << endl;
                    cout << "Thanks for using Fact Fun Math Trainer." << endl;
                    cout << "Remember: Practice makes perfect!" << endl;
                    cout << "The more you practice, the better you will get!" << endl;
                    cout << "Please come back soon!" << endl;
                    return 0;
                }
                else ((again!= stry) && (again != strY) && (again != strn) && (again != strN));
                {
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << endl;
                    cout << "Oops! That wasn't a y or n!" << endl;
                    cout << "Please type y or n and hit the Enter key." << endl;
                                                    /** Offers student a chance to enter y or n correctly **/
                    getline(cin,again);

                }

            }

		if (answer == guess)    /**Asks the student if they want another problem **/
            {
            cin.clear();
            cin.ignore(100,'\n');
            cout << endl;
            cout << "Correct. Practice Makes Perfect!!!" << endl;
			cout << "Would you like to try another problem? Please enter y or n." << endl << endl;
			getline(cin,again);
            }


        while((again != stry) && (again != strY) && (again != strn) && (again != strN))  /** Loop that prevents wrong input for the y/n question **/
                {
                cout << " " << endl;
                cout << "Oops! That did not work." << endl;
                cout << "You did not enter y or n. Please type y or n and hit the Enter key." << endl;  /** Offers student a chance to enter y or n correctly **/
                getline(cin,again);
                }

	      if ((again == strn) || (again == strN))      /** These lines print out comments when the user is done. **/

             {
                cout << " " << endl;
                cout << "You did a great job! Thanks for using Fact Fun Math Trainer." << endl;
                cout << "Remember: Practice makes perfect!" << endl;
                cout << "The more you practice, the better you will get!" << endl;
                cout << "Please come back soon!" << endl;
             }


     }
return 0;
}
