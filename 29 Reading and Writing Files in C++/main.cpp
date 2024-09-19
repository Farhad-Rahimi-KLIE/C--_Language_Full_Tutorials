#include <iostream>
#include <fstream>

/*
   the useful classes for working with fies in c++ are:
     1 - fstreambase
     2 - ifstream // derived from fstreambase
     3 - ofstream // derived from fstreambase
*/

/*
   in order work with files in c++, you will have to open it. primarily, there are 2 ways to open a file:
   1 - Using the Constructor
   1 - Using the member function opne() of the class
*/

using namespace std;

int main()
{
  string st = "Hello Farhad";
  string st2;
  // Opening file using constructor and writing it
  // ofstream out("example.txt"); // Write Operation
  // out<<st;

  // Opening file using constructor and Reading it
  ifstream in("example.txt"); // Reading Operation
  in>>st;
  getline(in, st2);
  cout<<st2;

    return 0;
}