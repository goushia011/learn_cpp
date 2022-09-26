//wap to find factorial of a no.
#include <iostream>
using namespace std;
int main()
{
    int f = 1, i = 1, n;
    cout << "enter any no.\n";
    cin >> n;
    while (i <= n)
    {
        f = f * i;
        i++;
    }
     cout << f;
}