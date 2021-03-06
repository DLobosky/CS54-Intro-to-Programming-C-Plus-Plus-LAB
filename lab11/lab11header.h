//Programmer: Dalton Lobosky              Date: 04/21/2013
//File: lab11header.h                        Section: B
//Purpose: The .h file that contains all the prototypes for the lab11main.cpp

#ifndef lab11header_H
#define lab11header_H

#include<iostream>
#include <string>
#include <cstring>
#include<fstream>
using namespace std;


//Variable Declarations


//(PRE/POST/DESC)

// Pre: must be an object declared as an "ifstream"
// Post: recieves a Source Word and target_array query
// Description: prompts for source word and target_array query and collects both
void getFilename(ifstream & fin, string & source_file_name,
     string & target_file_name);


// Pre: must be an object declared as an "ifstream" and "ofstream",
//      source_file_name and target_file_name must have user data
// Post: creates a file with a filename supplied by the user
// Description: takes in the name of the source file and reads each value.
//              it then takes in two values at a time and outputs their product
//              into the stream until the end of the file is reached.
//              the stream is then exported into a file with the supplied
//              target filename.

void makeFile(ifstream & fin, ofstream & fout, const string source_file_name,
              string & target_file_name, int & prod);


// Pre:
// Post: outputs a greeting to the user's screen
// Description: "hello"
void greeting();

void greeting2();

#endif
