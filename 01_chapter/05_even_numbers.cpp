// ********************************** Print even numbers 1 to n ************************
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

//************************************** Adding 2 ********************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     for (int i = 2; i <= num; i = i + 2)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }