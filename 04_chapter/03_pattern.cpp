//******************* Pattern print *********************/
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number for pattern: ";
  cin >> n; // n=5
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}