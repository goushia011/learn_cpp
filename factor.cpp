// wap to print all factor of agiven no.
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int factor(int n)
{

    int divisor = 1;
    cout<<"factor of ano. is: ";
    while (divisor <=n)
    {
        if (n % divisor == 0)
        {
            cout <<divisor;
            cout << endl;
        }
        divisor++;
    }
}
int main()
{
    int n;
    cout << "enter any number\n";
    cin >> n;
    factor(n);
    return 0;
}