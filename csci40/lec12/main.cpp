#include <iostream>
#include "sumOfSquares.h"
using namespace std;

int main() {
  cout << "Enter a number n: ";
  int n;
  cin >> n;

  cout << sumOfSquaresFrom1To(n) << endl;

  return 0;
}

