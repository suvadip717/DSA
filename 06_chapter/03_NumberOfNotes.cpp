#include <iostream>
using namespace std;

int main()
{
  int amount, count;
  cout << "Enter your amount: ";
  cin >> amount;
  switch (100)
  {
  case 100:
    count = amount / 100;
    amount = amount % 100;
    cout << "Number of 100 RS note is " << count << endl;
  case 50:
    count = amount / 50;
    amount = amount % 50;
    cout << "Number of 50 RS note is " << count << endl;
  case 20:
    count = amount / 20;
    amount = amount % 20;
    cout << "Number of 20 RS note is " << count << endl;
  case 10:
    count = amount / 10;
    amount = amount % 10;
    cout << "Number of 10 RS note is " << count << endl;
  case 5:
    count = amount / 5;
    amount = amount % 5;
    cout << "Number of 5 RS note is " << count << endl;
  default:
    count = amount / 1;
    amount = amount % 1;
    cout << "Number of 1 RS note is " << count << endl;
    break;
  }
  return 0;
}