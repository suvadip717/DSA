// ***************** Pattern print *********************

// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number for pattern: ";
  cin >> n; // n=4
  for (int i = 0; i < n; i++)
  {
    for (int j = n - i; j > 0; j--)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}