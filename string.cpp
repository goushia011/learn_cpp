#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main() {
    char f_name[100], l_name[100], name[100];
    gets(f_name);
    gets(l_name);
    strcat(name, f_name);
    strcat(name, " ");
    strcat(name, l_name);
    cout<<"hello, "<<name;
}