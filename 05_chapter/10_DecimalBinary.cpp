// Print number decimal to binary

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, i = 0, bit, binary_number = 0;
  cout << "Enter a number for convert binary: ";
  cin >> n;
  while (n != 0)
  {
    bit = n & 1;
    binary_number = (bit * pow(10, i)) + binary_number;
    i++;
    n = n >> 1;
  }
  cout << "Binary number is: " << binary_number << endl;
  return 0;
}