#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, n = 1;
    for (i = 0; i < 10; ++i)
    {
        for (j = 1; j <= 10; ++j, ++n)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (i = 0; i < 10; ++i)
    {
        for (j = 1; j <= 10; ++j)
        {
            cout << i * 10 + j << " ";
        }
        cout << endl;
    }
    for (i = 0; i < 10; ++i)
    {
        for (j = 1; j <= 10; ++j)
        {
            cout << i * 10 + j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < 10; ++i)
    {
        for (j = i * 10 + j; j <= (i + 1) * 10; ++j)
        {
            cout << j << " ";
        }
    }
}