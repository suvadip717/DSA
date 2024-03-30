#include <iostream>
using namespace std;

int main()
{
    int num;
    bool flag = false;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Number is not prime" << endl;
    }
    else
    {
        cout << "Number is prime" << endl;
    }
    return 0;
}