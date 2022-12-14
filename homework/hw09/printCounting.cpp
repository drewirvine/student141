/****************************************************************************
 *
 * hw09: Print the skip counting and whenter one number is a factor of another
 *
 * File Name:  printCounting.cpp
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include <iostream>

using namespace std;

// function definitions

void printSkipCount(int firstNumber, int secondNumber) {

  if (firstNumber > secondNumber) {
    cout << "Error: first argument is larger than second argument" << endl;
    return;
  }

  for (int i = firstNumber; i <= secondNumber;
       i += firstNumber) { // FIXME should be counting up to the second number
                           // by the fist number.
    cout << i << endl;
  }
}

void printFactor(int firstNumber, int secondNumber) {
  if (secondNumber % firstNumber == 0) {
    cout << "Yes, " << firstNumber << " is a factor of " << secondNumber
         << endl;
  } else {
    cout << "No, " << firstNumber << " is not a factor of " << secondNumber
         << endl;
  }
}

// main program

int main() {

  int firstNumber, secondNumber;
  char countType, doAgain;

  // we will do this until the user is done
  do {

    // collect the numbers from the user
    do {
      cout << "Enter a positive integer: ";
      cin >> firstNumber;
      if (firstNumber < 1) {
        cout << "Error! Invalid number." << endl;
      }
    } while (firstNumber < 1);

    do {
      cout << "Enter another positive integer: ";
      cin >> secondNumber;
      if (secondNumber < 1) {
        cout << "Error! Invalid number." << endl;
      }
    } while (secondNumber < 1);

    // ask for the type of sum
    do {

      cout << "What should I do with these two numbers?" << endl;
      cout << "  - (s)kip counting" << endl;
      cout << "  - (f)actor detection" << endl;
      cout << "Enter choice: ";
      cin >> countType;
      cout << endl;

      if (countType != 's' && countType != 'f') {
        cout << "Error! Invalid selection." << endl;
      }

    } while (countType != 's' && countType != 'f');

    // Make the function call
    switch (countType) {
    case 's':
      printSkipCount(firstNumber, secondNumber);
      break;
    case 'f':
      printFactor(firstNumber, secondNumber);
      break;
    }

    // should we do this again?
    cout << "Try Again? (y/n): ";
    cin >> doAgain;

  } while (doAgain == 'y');

  return 0;
}