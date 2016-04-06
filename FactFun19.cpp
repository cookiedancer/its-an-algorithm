//************************************************************************************************
// Group Name: 	It's an Algorithm
// Contributors: 	Joseph, James, Michelle, Tonya, Eva
// Group Project:	CS110 Prof Looms
// Date: 		04/06/2016
// Version: 		13
// Program Name: 	FactFun
// Description: 		Helps students practice multiplication facts
//************************************************************************************************


// Directions to the pre-processor

#include <cmath>                	// Allows access to math functions
#include <iostream>              	// Allows use of cout and cin
#include <stdlib.h>                	// Allows use of random number generator
#include <time.h>                  	// Allows access to random functions
#include <limits>                  	// Allows access to the numeric_limits type
#include <string>                  	// Allows use of string and getline

using namespace std;            	// Allows access to where the libraries make the declarations

int getInt()                   	// getInt is a function that validates that what is entered for guess is a number
				// Error handling if a character other than an integer is entered
{
	int guess=0;

	while (!(cin >> guess))
		{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << " \n"
                "Oh No! Something is not right!\n"
                "You must enter a number. Please try again.\n"
                " " << endl;
		}
	return (guess);
	}





int main ()			// int main is the function that the CPU will call to start the program

{

// Declarations of the local variables
	string again;                // again is a character
	int a;                        	// a is the first integer for the math problem
	int b;                        	// b is the second integer for the math problem
	int answer;                  // answer will be the computer programs solution and will be an

				// Declaration of the string variables for the y/n function

    const string y = "y";
    const string Y = "Y";
    const string n = "n";
    const string N = "N";
    char oops;

        				//Welcome user to the Fact Fun Math Trainer

cout  << 	"Welcome to FactFun Math Trainer" << endl;
        	cout  << 	" \n"

        	         	"I'm PRODUCTO, your FactFun Personal Tutor.\n"
        	         	"We will practice multiplication facts until you get it right!\n"
        	         	" " << endl;

            cout  << 	"Each time you solve a problem or answer a question,\n"

                        "please press the Enter key when you are done.\n"
                        " " << endl;

            cout  << 	"Let's get started!\n"
                        " " << endl;

	again = 'y';                  // Initializes the value of the variable again as 'Y'

				// This while loop keeps the program giving math problems

	while ((again == y) || (again == Y))  //as long as the student replies with a y or Y
	{
		srand ( time(NULL) );              // Random number generator. produces 0-12
		a = rand() % 13;                    	// Limits both a and b variable to be less than 13
		b = rand() % 13;
        		answer = a * b;            //Calculates the correct answer

					// Prompts the user to input the answer
					// Prints the problem

cout << "Solve the equation " << a << " x " << b << " = ";
        			cout << " " << endl;

        		int guess = getInt();

			//This loop lets the student keep trying until they get the problem correct

while (answer != guess)            {

            		cout << " \n"
            		        "I think something went wrong!\n"
            		        " \n"
            		        " \n"
                            "        **************     \n"
                            "     ********************     \n"
                            "   ************************   \n"
                            "  **************************  \n"
                            " ****    ************    **** \n"
                            " ****     **********     **** \n"
                            " **************************** \n"
                            " ************    ************ \n"
                            " **************************** \n"
                            " **************************** \n"
                            " *********         ********** \n"
                            " ********            ******** \n"
                            "  *******            *******  \n"
                            "   ********        ********   \n"
                            "     *******************      \n"
                            "       ***************        \n" << endl;
			cout << "Let us try this again! What is the answer?\n"
                    " \n"
                    "Do you want to solve another one? Enter y / n.\n" << endl;
				cin >> oops;

			//The user can abort the program or solve another problem.

if ((oops == 'y') || (oops == 'Y'))
                {
			// If y is chosen, the user will receive a new problem
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << "Solve the equation " << a << " x " << b << " = ";
                    cin >> guess;
                    break;
                }
                if ((oops == 'n') || (oops == 'N'))
                {
			//If no is chosen, the program will end
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << " \n"
                            "Thanks for using Fact Fun Math Trainer.\n"
                            "Remember: Practice makes perfect!\n"
                            "The more you practice, the better you will get!\n"
                            "Please come back soon!\n" << endl;
                    return 0;

                }
		// Error handling if anything other than y or no is entered

                else ((oops != 'y') || (oops != 'Y') || (oops != 'n') || (oops != 'N'));

                {
                    cin.clear();
                    cin.ignore(100,'\n');
                    cout << endl;

                    cout << "Oops! That did not work.\n"
                            "You did not enter y or n. Please type y or n and hit the Enter key." << endl;

                    	// Offers student a chance to enter y or n correctly
                    cin >> oops;
                    break;
                }

            }
		//Asks the student if they want another problem if they guessed correct
		if (answer == guess)
            {

		// If answer is correct, the program will prompt the user to continue or abort
            cin.clear();
            cin.ignore(100,'\n');

            cout << " " << endl;
            cout << "Correct. Practice Makes Perfect!!!" << endl;
            cout << "\n"
                    "     **********     \n"
                    "   **************   \n"
                    "  ***  ******  ***  \n"
                    " ****  ******  **** \n"
                    " ****************** \n"
                    " ******** ********* \n"
                    " ****************** \n"
                    " ****          **** \n"
                    "  *****      *****  \n"
                    "    ************    \n"
                    "      ********      \n" << endl;


			cout << "Let's try another one! Please enter y / n." << endl;
			cout << " " << endl;
			getline(cin,again);
            }

		//Loop that prevents wrong input for the y/n question

        while((again != y) && (again != Y) && (again != n) && (again != N))
                {
                cout << " \n"
                        "Oops! That did not work.\n"
                        "You did not enter y or n. Please type y or n and hit the Enter key." << endl;

// Offers student a chance to enter y or n correctly
                getline(cin,again);
                }

		//These lines print out comments when the user HAS FINISHED.

	      if ((again == n) || (again == N))
             {
                cout << " \n"
                        "You did a great job! Thanks for using Fact Fun Math Trainer.\n"
                        "Remember: Practice makes perfect!\n"
                        "The more you practice, the better you will get!\n"
                        "Please come back soon!" << endl;
             }


     }



return 0;
}
