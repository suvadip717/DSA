#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n, rem;
  long sum = 0;
  cout << "Enter a number: ";
  cin >> n;
  while (n)
  {
    sum = n % 10 + sum * 10;
    n /= 10;
  }
  if (sum > INT_MAX || sum < INT_MIN)
  {
    cout << "Reverse number is: 0" << endl;
    return 0;
  }
  cout << "Reverse number is: " << sum << endl;
  return 0;
}