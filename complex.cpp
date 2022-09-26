#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
    float real, imaginary;

public:
    Complex();
    Complex(int real, int imaginary);
    Complex(Complex &c)
    {
        this->real = c.real;
        this->imaginary = c.imaginary;
    }
    float getReal();
    float getImaginary();
    Complex operator+(Complex operand);
    Complex operator*(Complex operand);
    Complex operator-(Complex operand);
    Complex operator/(Complex c);
    Complex operator-();
    void print();
};
Complex::Complex(int real, int imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}
Complex::Complex()
{
    real = 0;
    imaginary = 0;
}
float Complex::getReal()
{
    return real;
}
float Complex::getImaginary()
{
    return imaginary;
}
Complex Complex::operator+(Complex c)
{
    Complex r;
    r.real = this->real + c.real;
    r.imaginary = this->imaginary + c.imaginary;
    return r;
}
Complex Complex::operator-(Complex c)
{
    Complex r;
    r.real = this->real - c.real;
    r.imaginary = this->imaginary - c.imaginary;
    return r;
}

Complex Complex::operator*(Complex c)
{
    Complex r;
    r.real = (this->real * c.real) - (this->imaginary * c.imaginary);
    r.imaginary = (this->imaginary * c.imaginary) + (c.real * this->imaginary);
    return r;
}
Complex Complex::operator/(Complex c)
{
    Complex r;
    r.real = (this->real * c.real + this->imaginary * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
    r.imaginary = (this->imaginary * c.real - this->real * c.imaginary) / (c.real * c.real + c.imaginary * c.imaginary);
    return r;
}
    Complex Complex:: operator-(){
        Complex r;
        r.real=-this->real;
        r.imaginary=-this->imaginary;
        return r;
    }

void Complex::print()
{
    cout << this->getReal() << " + " << this->getImaginary() << "i" << endl;
}
int main()
{
    Complex c1(1, 2), c2(2, 8), c3,c4;

    c1.print();
    c2.print();
    // c3 = c1.add(c2);
    c3 = c1 + c2;
    c3.print();
    c3 = c1 * c2;
    c3.print();
    c3 = c2 - c1;
    c3.print();
    c3 = c2 / c1;
    c3.print();
    c3.print();
    c4=-c3;
    c4.print();
}