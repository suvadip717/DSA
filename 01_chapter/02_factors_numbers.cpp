#include <iostream>
using namespace std;

int main()
{
    int num, factor = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        factor *= i;
    }
    cout << "Factor of number " << num << " is " << factor << endl;
    return 0;
}