#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    while (n <= 100)
    {
        cout << n<< " ";
        if (n % 10 == 0)
        {
            cout << "\n";
        }
        n++;
    }
}