//******************* Pattern print *********************/
//      1
//     2 3
//    4 5 6
//   7 8 9 10

#include <iostream>
using namespace std;

int main()
{
  int n, p = 1;
  cout << "Enter your number: ";
  cin >> n; // n=4
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j > 0; j--)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << p << " ";
      p++;
    }
    cout << endl;
  }
  return 0;
}