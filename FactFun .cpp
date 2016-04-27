//************************************************************************************************
// Name: It's an Algorithm , Joseph, James, Michelle, Tonya, Eva Contributors
// Group Project CS110 Prof Looms
// Date: 4_08_2016
// Version: 23.5
// Program Name: FactFun
// Program Description: Helps students practice multiplication facts
//************************************************************************************************

// Directions to the preprocessor

#include <iostream>		// library for cout, cin
#include <cstdlib>		// library for rand, srand
#include <ctime>		// library for time
#include <limits>		// library for numeric_limits
#include <string>       // library for string type
#include <fstream>      // library for files include file open and close
#include <conio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;	// Allows access to where the libraries make the declarations

void face()

{
    int x =getmaxx();
    int y =getmaxy();
    setfillstyle(1,YELLOW);
    fillellipse(x/2,y/2,70,70);
    setfillstyle(1,BLACK);
    fillellipse(x/2-30,y/2-25,10,12);
    fillellipse(x/2+30,y/2-25,10,12);
    setcolor(BLACK);

}
int main ()			    // int main is the function that the CPU will call to start the program
{

// declaration of variables

    char again = 'y';	// again is the user's response to questions go again or try again, initialized as y
    int a, b, answer; 	// a and b are the two randomly generated integers, answer is the program generated answer
    float guess;	    // guess is the user's math answer
    string firstName;   // student's first name
    string lastName;    // student's last name
    int np = 0;         // np is a counter for the number of problems attempted adn initializes it at 0
    ofstream myfile;    // used for file output
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x =getmaxx();
    int y =getmaxy();
// Initial User Interface

	cout << "Welcome to FactFun Math Trainer \n"
            " \n"
        	"I'm PRODUCTO, your FactFun Personal Tutor. \n"
        	"We will practice multiplication facts until you get it right! \n"
        	" \n"
            "Press Enter each time you are done typing.\n"
           	" \n"
           	"Let's get started! \n"
         << endl;

    cout << "Please type your first name: ";            // user input of their first name, later written to file
    getline(cin,firstName);                             // used getline to avoid input error

    cout << "Please type your last name: ";             // user input of their last name, later written to file
    getline(cin,lastName);

    cout << "\nWelcome " << firstName << "! I'm glad you are here. Here is your first problem.\n";  //greeting




	while (again != '?') 	// while loop keeps the program giving problems as long as the student does not type the sentinal ?
	{
		srand ( time(NULL) ); 			// random number generator
		a = rand() % 13;			    // limits both a and b variable to be less than 13
		b = rand() % 13;
		answer = a*b;				    // calculates the correct answer


		cout << "\nSolve this problem: " << a << " x " << b << " = " ;	// prints the problem to the screen
		cin >> guess;							                    // takes in the user input and stores it in guess


		             while(cin.fail())				// enter the loop if the user does not enter a float number
                        {
                            cin.clear();					// resets the error state so it will check correctly the next time in the loop
                            cin.ignore(numeric_limits<int>::max(),'\n');	//  ignores the rest of the input or until the \n is found
                            cout << "\nOh No! Something is not right! \n"
                                    "You must enter a number. Please try again. \n";    // prompts the user to enter input again
                            cin >> guess;					// takes the user input and stores it in guess
                       	}


                    while (answer != guess)			// enter the loop if the user entered the wrong answer
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<int>::max(),'\n');
                            cout << "\nUh Oh! That answer isn't correct. \n"

                                    "       ******       \n"                    // user interface to make it more child friendly
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

                                    "I know you can do this! Let's try again. \n"
                                    "Type a ? if you are done or any other key to continue \n" << endl;

                            cin >> again;       // gives the user another chance to answer if they want to do so

                            if (again == '?')       //exits the while loop if the sentinal ? is entered because user wants to quit trying
                            {
                                break;
                            }

                            cin.ignore(numeric_limits<int>::max(),'\n');
                            cout << "\nTry the problem again: " << a << " x " << b << " = ";		// prints the same problem again
                            cin >> guess;
                        }


            if (answer == guess) //if the answer is correct, the user is congratulated and prompted as to whether or not they want to do another problem
                {
                    np++;        // counts the number of problems tried
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n');


             cout << "\nCorrect. Practice Makes Perfect!!! \n"   //user interface to show encouragement

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

                       "Type a ? if you are done or any other key to continue.\n"<< endl;
                    cin >> again;
                    cin.clear();
                    cin.ignore(numeric_limits<int>::max(),'\n') ;
                }

	}

    if (answer != guess)        //checks to see if they did not correctly answer the last problem tried
        {
            cout << "\nThe answer was " << answer << ". \n" ;  //Prints the answer for the user
        }

    myfile.open ("FactFunList.txt", ios::app);                      // opens a file for output of student names and number of problems attempted, appends insted of overwriting
    myfile << firstName << " " << lastName << " " << np << endl;    //writes to the file
    myfile.close();                                                 //closes file

    cout << firstName << " " << lastName << "  Number of Problems you did today: " << np << endl;  // closing user interface to say good by and encourage them to come back
    cout << "\n" << firstName << ", thanks for using Fact Fun Math Trainer. \n"
            "Remember: Practice makes perfect! The more you practice, the better you will get! \n"
            "So please come back soon!" << endl;
for(int i=0;i<=5;i++)
    {
    face();
     arc(x/2,y/2,220,320,50); //Happy
     delay(1000);
     cleardevice();
    //arc(x/2,y/2+75,45,135,45); //Sad
    //line(x/2-30,y/2+40,x/2+30y/2+40;) //Confused
    face();
    pieslice(x/2,y/2+30, 180,0,30); //Laughing
    delay(2000);
    cleardevice();
    }
    getch();
    closegraph();
    return 0;          // ends program
}
