#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n)
{
    int f=1;
    n = n == 0 ? 1 : n;
    for(f = f * n;n>1;n--, f *= n);
    return(f);
}
int combination(int n,int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}
int main() {
    int n=10;
    for(int i=0;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"   ";
        }
        for(int j=0;j<=i;j++)
        {
            int c = combination(i,j);
            if(c < 10) 
                cout<<"00";
            else if(c < 100)
                cout<<"0";
            cout<<c;
            cout<<"   ";
        }
        cout<<endl;
    }
}