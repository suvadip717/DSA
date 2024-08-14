#include <iostream>
using namespace std;

int peakValue(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return mid;
}

int main()
{
    int arr1[5] = {2, 5, 7, 10, 1};
    int arr2[6] = {1, 2, 15, 7, 2, 1};

    int ans1 = peakValue(arr1, 5);
    cout << "The peak value is: " << arr1[ans1] << endl;

    int ans2 = peakValue(arr2, 6);
    cout << "The peak value is: " << arr2[ans2] << endl;

    return 0;
}