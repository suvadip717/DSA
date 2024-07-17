// ***************** Pattern print *********************
// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main()
{
  int n, temp = 0;
  cout << "Enter a number for pattern: ";
  cin >> n;
  char ch = 'A';
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << char(ch + temp) << " ";
      temp++;
    }
    cout << endl;
  }
  return 0;
}