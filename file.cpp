#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main() {
    string r;
    ofstream fout("read.txt");
    fout<< "file program\n";
    fout<<"run perfectly\n";
    fout.close();

    ifstream fin;
    fin.open("read.txt");
    while(!fin.eof()) {
        fin>>r;
        cout<<r;
    } 
}