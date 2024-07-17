// ***************** Pattern print *********************
//    1
//   22
//  333
// 4444

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number for pattern: ";
  cin >> n; // n=4
  for (int i = 1; i <= n; i++)
  {
    for (int j = n + 1 - i; j >= 0; j--)
    {
      cout << " ";
    }
    for (int k = 0; k < i; k++)
    {
      cout << i;
    }
    cout << endl;
  }
  return 0;
}