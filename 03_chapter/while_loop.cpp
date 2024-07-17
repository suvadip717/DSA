#include <iostream>
using namespace std;

int main()
{
  int a, i = 0, sum = 0;
  cin >> a;
  while (i < a)
  {
    sum += i;
    i++;
  }
  cout << sum << endl;

  return 0;
}