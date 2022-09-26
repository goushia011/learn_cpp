#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int temp, size, toBeSwaped;
    int a[100];
    cout << "Enter the size of array : ";
    cin >> size;
    cout << "enter array element" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1, toBeSwaped = i; j < size; j++)
        {
            if (a[toBeSwaped] > a[j])
            {
                toBeSwaped = j;
            }
        }
        temp = a[i];
        a[i] = a[toBeSwaped];
        a[toBeSwaped] = temp;

        for (int k = 0; k < size; ++k)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}