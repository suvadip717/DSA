#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int n, ans = 1;
  cout << "Enter a number:";
  cin >> n;
  for (int i = 0; i <= 30; i++)
  {
    if (ans == n)
    {
      cout << "true" << endl;
      return 0;
    }
    if (ans < INT_MAX / 2)
      ans *= 2;
  }
  cout << "false" << endl;
  return 0;
}