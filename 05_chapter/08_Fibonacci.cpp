// Print Fibonachi series 1,1,2,3,5,8,13,21..

#include <iostream>
using namespace std;

int main()
{
  int n, i = 0, j = 1, sum = 0;
  cout << "Enter a number for fibonachi series: ";
  cin >> n;
  // while (j <= n)
  // {
  //   cout << sum << " ";
  //   sum = i + j;
  //   i = j;
  //   j = sum;
  // }
  for (int k = 0; k < n; k++)
  {
    cout << sum << " ";
    sum = i + j;
    i = j;
    j = sum;
  }
  return 0;
}
