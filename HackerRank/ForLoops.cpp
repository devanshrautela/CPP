#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    // Complete the code.
    int a, b;
    cin >> a >> b;
    for (int i = a; i < b + 1; i++)
    {
        if (i < 10)
        {
            if (i == 1)
            {
                cout << "one\n";
            }
            if (i == 2)
            {
                cout << "two\n";
            }
            if (i == 3)
            {
                cout << "three\n";
            }
            if (i == 4)
            {
                cout << "four\n";
            }
            if (i == 5)
            {
                cout << "five\n";
            }
            if (i == 6)
            {
                cout << "six\n";
            }
            if (i == 7)
            {
                cout << "seven\n";
            }
            if (i == 8)
            {
                cout << "eight\n";
            }
            if (i == 9)
            {
                cout << "nine\n";
            }
        }
        else if (i % 2 == 0)
        {
            cout << "even\n";
        }
        else if (i % 2 != 0)
        {

            cout << "odd\n";
        }
    }
    return 0;
}
