#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;
class st
{
    int roll;
    char name[100];
    float marks;

public:
    int getRoll()
    {
        return roll;
    }
    void setRoll(int roll)
    {
        this->roll = roll;
    }
    int getMark()
    {
        return marks;
    }
    void setMark(float marks)
    {
        this->marks = marks;
    }
    char *getName()
    {
        return name;
    }
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
};

int main()
{
    fstream file;
    st tan, tan3;
    tan.setRoll(1);
    tan.setMark(100);
    tan.setName("tanveer");
    cout << tan.getRoll() << endl;
    cout << tan.getMark() << endl;
    cout << tan.getName() << endl;
    file.open("file3.txt", ios::out | ios::binary);
    file.write((char *)&tan, sizeof(tan)); //typecasted tan obj to string
    file.close();
    file.open("file3.txt", ios::in | ios::binary);
    st tan1,tan2;
    file.read((char *)&tan1, sizeof(tan1));
    file.read((char *)&tan2, sizeof(tan2));
     tan1.setRoll(1);
    tan1.setMark(100);
    tan1.setName("tanveer");
    cout << tan1.getRoll() << endl;
    cout << tan1.getMark() << endl;
    cout << tan1.getName() << endl;
    tan1.setRoll(1);
    tan1.setMark(100);
    tan1.setName("tanveer");
    cout << tan1.getRoll() << endl;
    cout << tan1.getMark() << endl;
    cout << tan1.getName() << endl;
    file.close();

}