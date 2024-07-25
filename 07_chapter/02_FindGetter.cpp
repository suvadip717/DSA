#include <iostream>
using namespace std;

int main()
{
  int size, arr[100];
  cout << "Enter array size: ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int bigNum = arr[0], smNum = arr[0];
  for (int i = 0; i < 5; i++)
  {
    bigNum = max(bigNum, arr[i]);
    // if (arr[i] > bigNum)
    // {
    //   bigNum = arr[i];
    // }
    smNum = min(smNum, arr[i]);
    // if (smNum > arr[i])
    // {
    //   smNum = arr[i];
    // }
  }
  cout << "Biggest number of the array is: " << bigNum << " and smallest is: " << smNum << endl;

  return 0;
}