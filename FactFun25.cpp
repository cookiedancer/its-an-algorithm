//************************************************************************************************
// Name: It's an Algorithm , Joseph, James, Michelle, Tonya, Eva Contributors
// Group Project CS110 Prof Looms
// Date: 4_08_2016
// Version: 21
// Program Name: FactFun
// Program Description: Helps students practice multiplication facts
//************************************************************************************************

// Directions to the preprocessor

#include <iostream>		// library for cout, cin
#include <cstdlib>		// library for rand, srand
#include <ctime>		// library for time
#include <limits>		// library for numeric_limits

using namespace std;		// Allows access to where the libraries make the declarations

int main ()			// int main is the function that the CPU will call to start the program
{

// declaration of variables

    char again = 'y';	// again is the user's response to questions go again or try again, initialized as y
    char oops = 'Y';    //oops is the user's response to continuing after missing a problem. initialized as y
    int a, b, answer; 	// a and b are the two randomly generated integers, answer is the program generated answer
    float guess;	// guess is the user's math answer in either integer or decimal form to prevent errors

// Initial User Interface

	cout << "Welcome to FactFun Math Trainer \n"
                " \n"
        	"I'm PRODUCTO, your FactFun Personal Tutor. \n"
        	"We will practice multiplication facts until you get it right! \n"
        	" \n"
                "Don�t forget to press Enter key when you are done.\n"
           	" \n"
           	"Let's get started! \n"
            << endl;


	while ((again=='y') || (again=='Y')) 	// while loop keeps the program giving problems as long as the student replies with a y or Y
	{
		srand ( time(NULL) ); 			// random number generator
		a = rand() % 13;			    // limits both a and b variable to be less than 13
		b = rand() % 13;
		answer = a*b;				    // calculates the correct answer


		cout << "Solve the equation " << a << " x " << b << " = " ;	// prints the problem to the screen
		cin >> guess;							                    // takes in the user input and stores it in guess

        while(cin.fail())				// Will ask for a new value of guess whenever a number is not put in
        {
            cin.clear();					// resets the error state so it will check correctly the next time in the loop
            cin.ignore(numeric_limits<int>::max(),'\n');	//  ignores the rest of the input or until the \n is found
            cout << "Oh No! Something is not right! \n"
                    "You must enter a number. Please try again." << endl;    // prompts the user to enter input again
            cin >> guess;					// takes the user input and stores it in guess
        }

        while (guess != answer)			// enter the loop if the user entered the wrong answer
        {
            cout << "Uh Oh! That answer isn't correct. \n"
                            "       ******       \n"
                            "     **********     \n"
                            "   **************   \n"
                            "  ***  ******  ***  \n"
                            " ****  ******  **** \n"
                            " ****************** \n"
                            " ************* **** \n"
                            " ****************** \n"
                            " *****        ***** \n"
                            "  *** ******** ***  \n"
                            "    ************    \n"
                            "      ********      \n"
                    "I know you can do this! Would you like to try again? \n"
                    "Press Y to continue, and any other key to exit the program. \n" << endl;
            // gives the user another chance to answer if they want to do so
            cin >> oops;
                while(cin.fail())				//upon failure of input, will enter while loop
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');	// ignore all input besides the first character which is asked for
                        cout << "That could have been bad, Y to continue, anything else to exit :)" << endl; // input again
                        cin >> oops;					// new input for oops
                    }
            if ((oops == 'y') || (oops == 'Y')) //only if they type y or Y will the program read this
            {
                cout << "Solve the equation " << a << " x " << b << " = ";
                cin >> guess;   // second chance to solve first wrong answer, will loop until correct
                    while(cin.fail())
                        {
                        cin.clear();
                        cin.ignore(numeric_limits<int>::max(),'n');
                        cout << "Lets put the only the right number this time" << endl;
                        cin >> guess;
                        }
            }
            else //if they do not want to continue after getting an answer incorrect
            {
                cout << "The answer is " << answer << ". \n"   //Prints the answer for the user
                        "Thanks for using Fact Fun Math Trainer. \n"
                        "Remember: Practice makes perfect! \n"
                        "The more you practice, the better you will get! \n"
                        "Please come back soon!" << endl;
                     return 0;
            }

        }

        if (guess == answer) //if the answer is correct, the user is prompted as to whether or not they want to do another problem
        {
            cout << "Correct. Practice Makes Perfect!!!\n"
                        "     **********     \n"
                        "   **************   \n"
                        "  ***  ******  ***  \n"
                        " ****  ******  **** \n"
                        " ****************** \n"
                        " ****************** \n"
                        " ****************** \n"
                        " ****          **** \n"
                        "  *****      *****  \n"
                        "    ************    \n"
                        "      ********      \n"
                    "Would you like to try another problem? \n"
                    "Press Y to continue, and any other key to exit the program."<< endl;
            cin >> again;
                while(cin.fail())				//upon failure of input, will enter while loop
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');	// ignore all input besides the first character which is asked for
                        cout << "That could have been bad, Y to continue, anything else to exit :)" << endl; // input again
                        cin >> again;					// new input for again
                    }
        }
    }
	cout << "You did a great job! Thanks for using Fact Fun Math Trainer. \n"
         << "Remember: Practice makes perfect! \n"
         << "The more you practice, the better you will get! \n"
         << "Please come back soon!" << endl;
	return 0;
}
