#include <iostream>
#include <conio.h>
using namespace std;

/*
*
**
***
****
*****
*/
void p1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
*****
****
***
**
*
*/

void p2()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
____*
___**
__***
_****
*****
*/
void p3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
----*
---**+
--***++
-****+++
*****++++
*/
void p4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
1
12
123
1234
12345
*/
void p5(int n)
{
    for (int i = 2; i <= 5; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
void p6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
/*
12345
1234
123
12
1
*/
void p7(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
/*
54321
4321
321
21
1
*/
void p8(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
/*
54321
5432
543
54
5
*/
void p9(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
/*
5
54
543
5432
54321
*/
void p10(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
/*
12345
2345
345
45
5
*/
void p11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
/*
    1
   121
  12321
 1234321
123454321
*/
void p12(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=i-1;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
/*
    5
   454
  34543
 2345432
123454321
*/
void p13(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>1;j--)
        {
            cout<<" ";
        } 
        for(int j=i;j<=n;j++)
        {
            cout<<j;
        }
        for(int j=n-1;j>=i;j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
}
/*
1
123
12345
1234567
123456789
*/
void p14(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i*2;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    p1();
    p2();
    p3(5);
    p4(5);
    p5(5);
    p6(5);
    p7(5);
    p8(5);
    p9(5);
    p10(5);
    p11(5);
    p12(5);
    p13(5);
    p14(5);
}