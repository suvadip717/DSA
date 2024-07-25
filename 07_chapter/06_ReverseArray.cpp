#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
  for (int i = 0, j = n - 1; i < n / 2; i++, j--)
  {
    swap(arr[i], arr[j]);
  }
}
void printArr(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arra1[] = {34, 78, 90, 31, 72, 83};
  int arra2[] = {18, 4, 17, 59, -63, 29, 43};

  reverse(arra1, 6);
  reverse(arra2, 7);

  printArr(arra1, 6);
  printArr(arra2, 7);
  return 0;
}