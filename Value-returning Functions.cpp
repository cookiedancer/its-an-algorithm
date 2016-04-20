#include <iostream>
#include <string.h>
using namespace std;

int Square(int);
int Cube(int);
void DisplayMessage(string, int);


int main()
{
    string squareMessage = "square ";
    string cubeMessage = "cube ";
    int a = Square(27);
    int b = Cube(27);


    DisplayMessage (squareMessage, a);
    DisplayMessage (cubeMessage, b);

    return 0;
}
 int Square(int n)
 {
     return n*n;
 }

 int Cube(int n)
 {
     return n*n*n;
 }

 void  DisplayMessage(string msg, int n)
{
    cout << "My number is 27\n"
         << "The " << msg << "of my number is " << n << endl;


    return;
}

