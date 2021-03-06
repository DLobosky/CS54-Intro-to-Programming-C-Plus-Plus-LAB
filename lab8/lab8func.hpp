// Programmer: Dalton Lobosky             Date: 03/19/2013
// Class: CS54                            Section: C
// File: lab8func.hpp
// Purpose: Contains all the temppalted function definitions that run in the 
//          lab8main.cpp file
//******************************************************************************

#include "lab8header.h"
#include <iostream>
using namespace std;

template <typename T>
void get_Data(T &num1, T &num2, T &num3)
{
  cout << endl << endl << "Please enter the first number.\n" << endl; 
  cin >> num1;
  
  cout << endl << endl << "Please enter the second number.\n" << endl;
  cin >> num2;

  cout << endl << endl << "Please enter the third number.\n" << endl;
  cin >> num3;
 
  return;
}

template <typename T>
void sort_Data(T &num1, T &num2, T &num3)
{
  if(num1 > num2)
  {
    T temp = num2;
    num2 = num1;
    num1 = temp;
  }
  
  if(num2 > num3)
  {
    T temp2 = num3;
    num3 = num2;
    num2 = temp2;
  }
  
  if(num3 < num1)
  {
    T temp3 = num1;
    num1 = num3;
    num3 = temp3;
  }
  
  return;
}

template <typename T>
void print_Data(const T &num1, const T &num2, const T &num3)
{
  cout << endl << num1 << " " << num2 << " " << num3 << endl;
  return;
}
