/*************************************************************************
 *
 * In-Class Exercise:  Find and fix the errors in the following C++
 *                     program so that it will compile and run
 *                     as expected.
 *
 * File Name: fixme.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

  // assign some variable values
  int a = 25;
  int b = 5;

  // output several computations -- endl will end the line
  cout << " a + b = " << a * b << endl;
  cout << " a * b = " << a * b << endl;
  cout << " a / b = " << a / b << endl;

  // assign a few more variables
  int grad_year;
  int college;

  // ask for and save graduation year
  cout << endl;
  cout << "In what year will you graduate?";
  cin >> grad_year;

  // output a sentence based on this input
  cout << "You will graduate from " << college << " in ";
  cout << grad_year << "." << endl;

  return (0);
}
