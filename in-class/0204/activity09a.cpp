#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  //   cout << "What is your name? ";
  //   cin >> name;
  //   for (int i = 0; i < 5; i++) {
  //     for (int j = 0; j < 3; j++) {
  //       cout << name << " ";
  //     }
  //     cout << endl;
  //   }

  for (int j = 0; j < 7; ++j) {
    for (int i = 0; i < 5; ++i) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
