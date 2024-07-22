#include <iostream>
using namespace std;

bool numPrime(int num)
{
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  bool answer = numPrime(num);
  if (answer)
  {
    cout << "Number is prime" << endl;
  }
  else
  {
    cout << "Number is not prime" << endl;
  }
  return 0;
}