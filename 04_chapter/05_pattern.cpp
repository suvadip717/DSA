//******************* Pattern print *********************/
//  1
//  2 3
//  4 5 6
//  7 8 9 10

#include <iostream>
using namespace std;

int main()
{
  int n, p = 1;
  cout << "Enter a number: ";
  cin >> n; // n=4
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << p << " ";
      p++;
    }
    cout << endl;
  }
  return 0;
}