#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  switch (num)
  {
  case 1:
    cout << "This is one" << endl;
    break;
  case 2:
    cout << "This is two" << endl;
    break;
  case 3:
    cout << "This is three" << endl;
    break;
  case 4:
    cout << "This is four" << endl;
    break;
  default:
    cout << "This is default case" << endl;
  }
  return 0;
}