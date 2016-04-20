#include <iostream>
using namespace std;

void tutorial()
{
    cout << "\nMultiplication is just repeated addition.\n"
            "3x3 is the same as 3 three times or 3+3+3.\n"
            "So whatever your first factor is,\n"
            "add it to itself the number of times your second factor indicates.\n"
            "\nFor example: 2x7\n"
            "Take the first factor (2) and add it to itself\n"
            "the number of times the second factor indicates (7)\n"
            "\n2+2+2+2+2+2+2=14\n"
            "\n2x7=14\n"
            "\nOr you can think of multiplication as groups.\n"
            "In the last examples, there are two groups of seven, which is 14.\n"
            << endl;
}
 int main ()
 {
     char help = 'y';
     cout << "Would you like a tutorial on how to multiply? Type y for yes" << endl;
     cin>> help;

     if (help == 'y')
     {
         tutorial();
     }
    //else
    //cout << Please solve << a*b << endl;
    return 0;
 }
