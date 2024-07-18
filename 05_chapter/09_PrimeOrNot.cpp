// Number is prime or not

#include <iostream>
using namespace std;

int main()
{
  int n;
  bool flag;
  cout << "Enter a number for checking prime or not: ";
  cin >> n;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      flag = true;
      break;
    }
    else
    {
      flag = false;
    }
  }
  if (flag)
  {
    cout << "Number is not prime" << endl;
  }
  else
  {
    cout << "Number is prime" << endl;
  }
  return 0;
}