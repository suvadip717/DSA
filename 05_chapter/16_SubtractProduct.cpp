// Subtract the Product and Sum of Digits of an Integer

#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0, pro = 1, ans, rem;
  cout << "Enter a number: ";
  cin >> n;
  while (n != 0)
  {
    rem = n % 10;
    sum += rem;
    pro *= rem;
    n /= 10;
  }
  ans = pro - sum;
  cout << ans << endl;
  return 0;
}
