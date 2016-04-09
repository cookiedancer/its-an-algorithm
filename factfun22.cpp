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
    int a, b, answer; 	// a and b are the two randomly generated integers, answer is the program generated answer
    float guess;	// guess is the user's math answer

// Initial User Interface

	cout << "Welcome to FactFun Math Trainer \n"
                " \n"
        	"I'm PRODUCTO, your FactFun Personal Tutor. \n"
        	"We will practice multiplication facts until you get it right! \n"
        	" \n"
                "Don’t forget to press Enter key when you are done.\n"
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

		             while(cin.fail())				// enter the loop if the user does not enter a float number
                       	     {
                            cin.clear();					// resets the error state so it will check correctly the next time in the loop
                            cin.ignore(numeric_limits<int>::max(),'\n');	//  ignores the rest of the input or until the \n is found
                            cout << "Please enter a valid response" << endl;    // prompts the user to enter input again
                            cin >> guess;					// takes the user input and stores it in guess
                       	     }


                    while (answer != guess)			// enter the loop if the user entered the wrong answer
		    {
                        cout << "Incorrect. Please try again" << endl;	// gives the user another chance to answer
                        cout << "Solve the equation " << a << " x " << b << " = ";		// prints the same problem again
                        cin >> guess;

	    		    while(cin.fail())
			    {
                            cin.clear();
                            cin.ignore(numeric_limits<int>::max(),'\n');
                            cout << "Please enter a valid response" << endl;
                            cin >> guess;
	    		    }
                    }
		if (answer == guess)
		{
			cin.clear();
			cin.ignore(numeric_limits<int>::max(),'\n');
			cout << "Correct. Would you like to try another problem? \n"
                        "Press Y to continue, and any other key to exit the program.";
			cin >> again;
			cin.clear();
			cin.ignore(numeric_limits<int>::max(),'\n') ;
		}
	}
	return 0;
}
