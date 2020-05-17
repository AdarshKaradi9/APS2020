#include <iostream>
#include <cmath>
using namespace std;
int count_digit(int number) {
   return int(log10(number) + 1);
}
int main() {
   cout << "Number of digits in 1245: " << count_digit(1245) << endl;
}