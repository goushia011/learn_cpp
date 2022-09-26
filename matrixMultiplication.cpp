#include <iostream>
#include <conio.h>
#include "array.cpp"
using namespace std;
int main()
{
    int a[100][100], b[100][100], c[100][100];
    int r1, r2, r3, c1, c2, c3;
    cout<<"enter r1 : ";
    cin>>r1;
    cout<<"enter c1 : ";
    cin>>c1;
    cout << "enter ar ray A element" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"enter r2 : ";
    cin>>r2;
    cout<<"enter c2 :";
    cin>>c2;
    cout << "enter array B element" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < c1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            
        }
    }
    cout<<"A * B\n";
    // for (int i = 0; i < r1; i++)
    // {
    //     for (int j = 0; j < c2; j++)
    //     {
    //         cout << c[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    printArray(c,r1,c2);
}