#include <iostream>
using namespace std;

int fact(int num)
{
  int mul = 1;
  for (int i = 1; i <= num; i++)
  {
    mul *= i;
  }
  return mul;
}

int main()
{
  int n, r, ans;
  cout << "Enter total number: ";
  cin >> n;
  cout << "Enter number of items: ";
  cin >> r;
  ans = fact(n) / (fact(r) * fact(n - r)); //  ncr= n!/(r!*(n-r)!)
  cout << ans << endl;
  return 0;
}