#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr, int k, int mid)
{
    int cowCount = 1;
    int lasPos = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]-lasPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lasPos=arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());

    int start = 0;
    int maxi = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }

    int ans = -1;
    int end = maxi;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {0, 3, 4, 7, 10, 9};
    cout << "Minimum distance is: " << aggressiveCows(arr, 4) << endl;
    return 0;
}