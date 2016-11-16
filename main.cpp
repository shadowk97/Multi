#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Functions.h"
using namespace std;

int main()
{
    Functions Fobj;
    int number;
    int condition = 1;
do{
    cout << "No.  List of functions: ------------- \n\n";             // This is the menu section.
    cout << " 1  Addition of two terms........." << endl;
    cout << " 2  Subtraction of two terms......" << endl;
    cout << " 3  Division of two terms........." << endl;
    cout << " 4  Multiplication of two terms..." << endl;
    cout << " 5  Random number generator(1-100)" << endl;
    cout << " 6  Area of triangle finder......." << endl;
    cout << " 7  Local Date & Time............." << endl;
    cout << " 8  Get your computer's IP Address" << endl;
    cout << " 9  Shutdown your computer........" << endl;
    cout << " 99 ------------About-------------" << endl;
    cout << " \n please select an option......." << endl;
    cin >> number;                                              //This gets the user's input


     switch(number)                                             // Decides which function to be called.
    {
    case 1:
        Fobj.Adder();
        break;
    case 2:
        Fobj.subtractor();
        break;
    case 3:
        Fobj.divider();
        break;
    case 4:
        Fobj.multiplier();
        break;
    case 5:
        Fobj.Random();
        break;
    case 6:
        Fobj.AreaOfTriangle();
        break;
    case 7:
        Fobj.DateTime();
        break;
    case 8:
        Fobj.IpAdd();
        break;
    case 9:
        Fobj.shutdown();
        break;
    case 0:
        cout << " \n GOOD JOB ! YOU HAVE FOUND THE HIDDEN SECTION !" << endl;
        cout << " This is developed in c++ and the code is of 149 lines !" << endl;
    case 99:
        cout << " \n Application developed by \n\n\n";
        cout << "    J 0 3 1 &&&& V ! P u 1  \n\n" << endl;
        break;
    default:
        cout << " Select a valid option noob...";
}
    cout << " Input 1 to return to menu or any other number to exit ... \n\n";
    cin >> condition;
    }while (condition == 1);


	cout << " Press any key to exit \n\n";
}


