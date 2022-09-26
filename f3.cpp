#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    string s;
    fstream file("file4.txt", ios::in | ios::out | ios::app | ios::ate);
    /*
//     while (!file.eof())
//     {
//         file >> s;
//         cout << s<<" ";
//     }
//     cout<<endl;
//     file.seekg(0, ios::beg);
//    while (!file.eof())
//     {
//         file >> s;
//         cout << s<<" ";
//     }
*/
    file.seekg(-12, ios::end);
    file << "wet";
    // cout << s;
}