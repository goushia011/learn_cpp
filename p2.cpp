#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int i, j, n = 100;
    for (i = 0; i < 10; ++i)
    {
        for (j = 1; j <= 10; ++j, --n)
        {
            cout << n << " ";
        }
        cout << endl;
    }
}