// ***************** Pattern print *********************
// A
// B B
// C C C

#include <iostream>
using namespace std;

int main()
{
  int n;
  char ch = 'A';
  cout << "Enter a number for pattern: ";
  cin >> n; // n=3
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << char(ch + i) << " ";
    }
    cout << endl;
  }
  return 0;
}