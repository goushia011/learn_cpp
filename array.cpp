#include <iostream>
#include <conio.h>
using namespace std;
void printArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void printArray(int a[100][100], int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void bubbleSort(int *a, int size)
{
    int temp;
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
}

int binarySearch(int *a, int size, int key)
{
    int lowerLimit, upperLimit, index;
    lowerLimit = 0;
    upperLimit = size - 1;
    for (int i = 0; i <= size / 2; ++i)
    {
        index = (lowerLimit + upperLimit) / 2;
        if (a[index] == key)
        {
            return index;
        }
        else if (a[index + 1] == key)
        {
            return index + 1;
        }
        else if (a[index] > key)
        {
            upperLimit = index;
        }
        else if (a[index] < key)
        {
            lowerLimit = index;
        }
    }
    return -1;
}
