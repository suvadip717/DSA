#include <iostream>
using namespace std;

int main()
{
  int a, sum = 0;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
    sum += i;
  }
  cout << sum << endl;
  return 0;
}