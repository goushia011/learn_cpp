#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    char ch='a';
    char *p2=&ch;
    int n=65;
    int *p1;
    p1=&n;
    int **p3=&p1;
    int ***p4=&p3;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(n)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p1)<<endl;
    cout<<*p1<<endl;
    cout<<p3<<endl;
    cout<<*p3<<endl;
    cout<<**p3<<endl;
    cout<<p4<<endl;
    cout<<*p4<<endl;
    cout<<**p4<<endl;
    cout<<***p4<<endl;

    
}