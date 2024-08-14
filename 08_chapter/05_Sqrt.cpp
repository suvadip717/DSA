#include <iostream>
using namespace std;

long long int sqrtNum(int num)
{
    int start = 0;
    int end = num;
    long long int mid = start + (end - start) / 2;

    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;
        if (square == num)
        {
            return mid;
        }
        if (square < num)
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
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = tempSol; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int ans = sqrtNum(num);
    cout << "Sqrt is: " << ans << endl;
    double preAns = morePrecision(num, 3, ans);
    cout << "Sqrt is with points: " << preAns << endl;
    return 0;
}