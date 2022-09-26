#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, d, r = 0, k;
    cout << "enter any no." << endl;
    cin >> n;
    k = n;
    while (n != 0)
    {
        d = n % 10;
        cout << d;
        n = n / 10;
        r = r * 10 + d;
    }
    // if(n%2=0)
    // {
    //     cout<<" no. is divisible";
    // }
    cout << endl
         << r;
    if (r == k)
    {
        cout << "no. is pallindrone";
    }
    else
    {
        cout << "no. is not pallindrone";
    }
}