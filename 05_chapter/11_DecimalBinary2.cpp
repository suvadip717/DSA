// Print number decimal to binary

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, rem, temp = 0, i = 0;
  cout << "Enter a decimal number: ";
  cin >> n;
  while (n != 0)
  {
    rem = n % 2;
    temp = temp + (rem * pow(10, i));
    n = n / 2;
    i++;
  }
  cout << "The binary number is: " << temp << endl;
  return 0;
}