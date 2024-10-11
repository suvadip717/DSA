#include <iostream>
using namespace std;

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void insertionSort(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = array[i];
        int j = i - 1;
        while (j >= 0 && curr < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = curr;
    }
}
int main()
{
    int arr[6] = {4, 7, 2, 9, 1, 5};
    printArray(arr, 6);
    insertionSort(arr, 6);
    printArray(arr, 6);
    return 0;
}