// Programmer: Dalton Lobosky             Date: 04/9/2013
// File: lab10main.cpp                            Section: B
// Purpose: Contains the int main() function that drives the lab10header.h
//          file
//******************************************************************************

#include "lab10header.h"
#include <iostream>
using namespace std;


int main()
{
  const int SIZE = 128;
  char again = 'y';
 
  greeting();
    
  do
  {
    char title[SIZE];  
  
    get_Data(title, SIZE);
    transform(title, SIZE);
    print_Result(title);
    
    cout << "\n\nWould you like to go again? (y/n)" << endl << endl;
    cin >> again;
    cin.ignore();
    
  }while(again == 'y');
 
  goodbye();
 
  return 0;
}


