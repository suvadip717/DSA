// ***************** Pattern print *********************
//    1
//   23
//  456
// 78910

#include <iostream>
using namespace std;

int main()
{
  int n, temp = 1;
  cout << "Enter a number for pattern: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j > 0; j--)
    {
      cout << " ";
    }
    for (int k = 0; k < i; k++)
    {
      cout << temp;
      temp++;
    }
    cout << endl;
  }
  return 0;
}