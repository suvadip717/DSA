// ***************** Pattern print *********************
// 1234
//  234
//   34
//    4

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number for pattern: ";
  cin >> n; // n=4
  for (int i = 1; i <= n; i++)
  {
    int temp = i;
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int k = n + 1 - i; k > 0; k--)
    {
      cout << temp;
      temp++;
    }
    cout << endl;
  }
  return 0;
}