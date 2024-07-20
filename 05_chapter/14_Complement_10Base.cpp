// The complement base 10 integer

#include <iostream>
using namespace std;

int main()
{
  int n, mask = 0, ans, m;
  cout << "Enter a number: ";
  cin >> n;
  m = n;
  if (n == 0)
  {
    cout << "The number is 1" << endl;
    return 0;
  }
  while (m != 0)
  {
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  ans = (~n) & mask;
  cout << "The number is " << ans << endl;

  return 0;
}