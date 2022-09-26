#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int f=1,n;
    cout << "enter any no.\n";
    cin >> n;
    for(f=f*n;n>1;n--,f=f*n);
    cout<<f;
}