//******************* Pattern print *********************/
//  1 2 3
//  4 5 6
//  7 8 9

#include <iostream>
using namespace std;

int main()
{
  int n, p = 1;
  cout << "Enter a number for pattern: ";
  cin >> n; // n=3
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << p << " ";
      p++;
    }
    cout << endl;
  }
  return 0;
}