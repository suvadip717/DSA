// ***************** Pattern print *********************
//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;

int main()
{
  int n, temp;
  cout << "Enter a number for pattern: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j > 0; j--)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << k;
    }
    temp = i - 1;
    for (int l = 1; l < i; l++)
    {
      cout << temp;
      temp--;
    }
    cout << endl;
  }
  return 0;
}