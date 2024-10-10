#include <iostream>
using namespace std;

int pivotIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (end > start)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr1[7] = {13, 17, 20, 24, 3, 5, 7};
    int index = pivotIndex(arr1, 7);
    cout << "The pivot index is: " << index << endl;

    return 0;
}