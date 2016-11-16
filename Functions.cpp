#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Functions.h"
using namespace std;


Functions::Functions()
{
}


void Functions::Adder()
{
        cout << "you have selected number adder" << endl;
        cout << "Please enter the first number..." << endl;
        cin >> one;
        cout << "Please enter the second number..." << endl;
        cin >> two;
        cout << "The sum is... " << one + two << endl;
}


void Functions::subtractor()
{
        cout << "you have selected number subtractor" << endl;
        cout << "Please enter the first number..." << endl;
        cin >> one;
        cout << "Please enter the second number..." << endl;
        cin >> two;
        cout << "The difference is... " << one - two << endl;
}


void Functions::divider()
{
        cout << "you have selected number divider" << endl;
        cout << "Please enter the first number..." << endl;
        cin >> one;
        cout << "Please enter the second number..." << endl;
        cin >> two;
        cout << "The answer is... " << one / two << endl;
}


void Functions::multiplier()
{
        cout << "you have selected number multiplier" << endl;
        cout << "Please enter the first number..." << endl;
        cin >> one;
        cout << "Please enter the second number..." << endl;
        cin >> two;
        cout << "The product is... " << one * two << endl;
}
void Functions::shutdown()
{
    char ch;


   cout << ("Do you want to shutdown your computer now (y/n)\n");
   cin >> ch;


   if (ch == 'y' || ch == 'Y')
      system("C:\\WINDOWS\\System32\\shutdown -s");
}


void Functions::Random()
{
    srand(time(0));


    for(int x = 1; x < 2; x++)
    {




        cout << 1+(rand()%100) << endl;
    }
}


void Functions::AreaOfTriangle()
{
    cout << "Enter height and base... " << endl;
    cin >> height >> base;
    area = (height*base)/2;
    cout << "Area of triangle is " << area << endl;;
}


void Functions::DateTime()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "The local date and time is: " << dt << endl;
}


void Functions::IpAdd()
{
    system("ipconfig /all");
}
