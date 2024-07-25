#include <iostream>
using namespace std;

int main()
{
  int a[100] = {};
  for (int i = 0; i < 100; i++)
  {
    a[i] = 1;
  }
  cout << a[50] << " " << a[20] << endl;

  return 0;
}