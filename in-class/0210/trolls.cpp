/*************************************************************************
 *
 * In-Class Exercise: Using Vectors to Store Prices and More
 *
 * File Name: trolls.cpp
 * Course:    CPTR 141
 */

#include <iomanip>  // for setting precision
#include <iostream> // for cin and cout
#include <string>   // for string variables
#include <vector>   // for vectors
using namespace std;

/*====================================================================
 * Main program
 */

int main() {

  // define the number of stores to initially collect
  const int NUM = 5;
  vector<double> prices;
  double tempPrice;
  vector<string> stores;
  string tempStore;
  string junk;

  // loop to collect store and price information
  for (int i = 0; i < NUM; i++) {
    cout << "Enter Store " << (i + 1) << ": ";
    getline(cin, tempStore);
    stores.push_back(tempStore);
    cout << "Enter Price " << (i + 1) << ": ";
    cin >> tempPrice;
    prices.push_back(tempPrice);
    getline(cin, junk);
  }

  cout << endl;
  // loop to print out prices
  //   cout << "The prices are: ";
  //   for (int i = 0; i < NUM; i++) {
  //     if (i < (NUM - 1)) {
  //       cout << fixed << setprecision(2);
  //       cout << prices.at(i) << ", ";
  //     } else {
  //       cout << fixed << setprecision(2);
  //       cout << "and " << prices.at(i) << "." << endl;
  //     }
  //   }

  // loop to find lowest price and print
  int where = 0;             // index of where lowest price is.
  double min = prices.at(0); // variable to hold lowest price.

  for (int i = 1; i < prices.size(); i++) {
    if (prices.at(i) < min) {
      where = i;
      min = prices.at(where);
    }
  }

  // print out cheapest price and store

  cout << endl;
  cout << fixed << setprecision(2);
  cout << "The cheaper is $" << prices.at(where);
  cout << " at " << stores.at(where) << "." << endl;

  // Pair Exercise: Let's Be Flexible
  //   Modify the program so that it does at allows the user to do at
  //   least one of the following:
  //     * add a new store/price to the vector
  //     * delete the store/price at a given index
  //     * change the price at a given store by entering its index
  //   These should be in a loop that displays the cheapest store and
  //   the price at that store after each action and then prompts for
  //   a new action.

  return 0;
}