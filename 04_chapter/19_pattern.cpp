// ***************** Pattern print *********************
// A B C
// B C D
// C D E

#include <iostream>
using namespace std;

int main()
{
  int n, temp;
  char ch = 'A';
  cout << "Enter a number for pattern: ";
  cin >> n; // n=3
  for (int i = 0; i < n; i++)
  {
    temp = i;
    for (int j = 0; j < n; j++)
    {
      cout << char(ch + temp + j) << " ";
    }
    cout << endl;
  }
  return 0;
}