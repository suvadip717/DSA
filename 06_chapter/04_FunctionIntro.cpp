#include <iostream>
using namespace std;

int powerOf(int num, int pow)
{
  int ans = 1;
  for (int i = 1; i <= pow; i++)
  {
    ans *= num;
  }
  return ans;
}

int main()
{
  int num, pow;
  cout << "Enter a number: ";
  cin >> num;
  cout << "Enter power of the number: ";
  cin >> pow;
  int ans = powerOf(num, pow);
  cout << "Answer is: " << ans << endl;
  return 0;
}