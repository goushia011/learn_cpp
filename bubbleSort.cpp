#include <iostream>
#include <conio.h>
#include "array.cpp"
using namespace std;

int main()
{
    int temp, size, a[100];
    cout<<"Enter size of array : ";
    cin>>size;
    cout << "enter array element" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printArray(a, size);
}