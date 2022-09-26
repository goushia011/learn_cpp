#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, key, a[5] = {1, 2, 3, 4, 5};
    cout << "Enter a numer";
    cin >> key;
    for (i = 0; i < 5; i++)
    {
        if (key == a[i])
        {
            break;
        }
    }
    if (i < 5)
    {
        cout << "it is in array" << endl;
    }
    else
        cout << "not in aaray";
}