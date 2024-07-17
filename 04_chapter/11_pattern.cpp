// ***************** Pattern print *********************
// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number for partten: ";
  cin >> n; // n=4
  for (int i = 1; i <= n; i++)
  {
    for (int k = 0; k < i; k++)
    {
      cout << "  ";
    }
    for (int j = n + 1 - i; j > 0; j--)
    {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}