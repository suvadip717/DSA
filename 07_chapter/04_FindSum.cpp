#include <iostream>
using namespace std;

int main()
{
  int n, arr[10], sum = 0;
  cout << "Enter array size: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  cout << "The sum of array is: " << sum << endl;

  return 0;
}