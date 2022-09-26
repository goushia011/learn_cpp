#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int prime(int n)
{
    int divisor = 2;
    while( divisor <= sqrt(n)) {
        if(n % divisor == 0) {
            return 0;
        }
        divisor++;
    }
    return 1;
}

int main() {
    int n;
    cout<<"Enter A number: ";
    // cin>>n;
    n=5;
    if(prime(n)) {
        cout<<"Prime number";
    } else {
        cout << "composite number";
    }
    return 0;
}