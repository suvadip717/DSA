//******************* Pattern print *********************/
//  1
//  2 1
//  3 2 1
//  4 3 2 1

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
    for (int j = 1; j <= i; j++)
    {
      cout << temp << " ";
      temp--;
    }
    cout << endl;
  }
  return 0;
}