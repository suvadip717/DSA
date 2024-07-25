#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {34, 56, 20, 12, 43, 82, 90, 72, 94, 52}, num;
  cout << "Enter the number you want to search: ";
  cin >> num;
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] == num)
    {
      cout << "Number is available at index " << i << endl;
      return 0;
    }
  }
  cout << "Number is not found in the array" << endl;
  return 0;
}