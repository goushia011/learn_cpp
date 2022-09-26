#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    string s;
    float f;
    ofstream fout("myfile.txt");
    fout << "name\n";
    fout << "password\n";
    fout << "retype_password";
    fout.close();
    ifstream fin;
    fin.open("myfile.txt");
    cout.width(28);
    cout << "*";
    cout << "welcome";
    cout << "*\n";
    while (!fin.eof())
    {
        cout.setf(ios::internal,ios::adjustfield);
        fin >> s;
        cout.width(15);
        cout << s;
        cout << "|";
    }
    cout << endl;
    cout.width(16);
    cout.setf(ios::left,ios::adjustfield);
    cout << "goushia";
    f = -3.4567;
    cout.precision(3);
    cout.width(16);
    cout.setf(ios::internal,ios::adjustfield);

    cout << f;
    cout.precision(3);
    cout.width(14);
    cout << f;
}