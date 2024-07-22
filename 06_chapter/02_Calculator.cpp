#include <iostream>
using namespace std;

int main()
{
  int a, b;
  char op;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  cout << "Enter a operator: ";
  cin >> op;
  switch (op)
  {
  case '+':
    cout << a + b << endl;
    break;
  case '-':
    cout << a - b << endl;
    break;
  case '*':
    cout << a * b << endl;
    break;
  case '/':
    cout << a / b << endl;
    break;
  case '%':
    cout << a % b << endl;
    break;

  default:
    cout << "Please enter a valid operator<<endl";
    break;
  }
  return 0;
}