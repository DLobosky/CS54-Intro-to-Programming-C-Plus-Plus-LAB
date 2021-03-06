// Programmer: Dalton Lobosky             Date: 03/12/2013
// Class: CS54                            Section: C
// File: lab7func.cpp
// Purpose: Contains all the function definitions that run in the lab7main.cpp
//          file 
//******************************************************************************

#include "lab7header.h"
#include <iostream>
using namespace std;


float harm(const float &f1, const float &f2,const float &f3,const float &f4)
{
  float mean;

  mean = (4 / ((1/f1) + (1/f2) + (1/f3) + (1/f4)));
  
  cout << endl << mean << endl;
  
  return mean;
}

float harm(const float &f1, const float &f2)
{
  float mean;

  mean = (2 / ((1/f1) + (1/f2)));
  
  cout << endl << mean << endl;
  
  return mean;
}

int next_Fib()
{
  static int num1 = 0, num2 = 1;
  int new_Num;
  
  new_Num = num1 + num2;
  
  num1 = num2;
  num2 = new_Num;
  
  return new_Num;
}

void print_Fib(const int &n)
{
  int new_Fib, n_Val;
  
  cout << endl << endl << "The preceding numbers in the fibonoacci sequence"
       << " are: " << endl;
   
  cout << "0\n1\n";  
  
  n_Val = n - 3;
  
  for (int i = 0; i <= n_Val; i++)
  {
    new_Fib = next_Fib();
    
    cout << new_Fib << " " << endl;
  }
  
  cout << endl << endl << endl;
  
  return;
}

