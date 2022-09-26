#include <iostream>
#include <conio.h>
using namespace std;
void swappbr(char &x, char &y)
{
    char z;
    z = x;
    x = y;
    y = z;
}
void swappbp(char *x, char *y)
{
    char z;
    z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    char a = 'A', b = 'B';
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swappbr(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swappbp(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}