#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter triangle 3 side value: ";
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Triangle is not valid" << endl;
    }
    else
    {
        cout << "Triangle is valid" << endl;
    }
    return 0;
}