#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
    int real,imag;
    public:
    void put()
     {
         real=2;
         imag=3;
         cout<<real;
         cout<<"+"<<imag<<"i";
         cout<<endl;
        
     }
     void set(int r,int im)
     {
        this-> real=r;
         this->imag=im;
     }
     void out()
     {
         cout<<this->real;
         cout<<"+";
         cout<<this->imag<<"i";
     }
void print()
{
    this->real
}

};
int main() {
   Complex c;
   c.put();
   c.set(3,6) ;
   c.out();
   
}