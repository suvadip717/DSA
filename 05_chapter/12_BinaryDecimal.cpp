// Enter a binary number for print Decimal number

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, rem, temp = 0, i = 0;
  cout << "Enter a binary number: ";
  cin >> n;
  while (n != 0)
  {
    rem = n % 10;
    temp = temp + (rem * pow(2, i));
    i++;
    n /= 10;
  }
  cout << "The decimal number is: " << temp << endl;
  return 0;
}