#include <iostream>
using namespace std;

int main() {
  int numCredits = 192;
  double majorGPA = 2.0;
  double overallGPA = 2.0;
  if ((numCredits >= 192) && (majorGPA >= 2.0) && (overallGPA >= 2.0)) {
    cout << "Congratulations!" << endl;
    cout << "You seem to meet the criteria for graduation." << endl;
  } else {
    cout << "Sorry!" << endl;
    cout << "You do not meet all the criteria for graduation." << endl;
  }
}