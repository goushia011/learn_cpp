#include <iostream>
#include <conio.h>
using namespace std;
class FourWheeler
{
    int noOfWheel;
    float fuelCapacity;
    protected:
    void setFuelCapacity(float fuelCapacity)
    {
        this->fuelCapacity = fuelCapacity;
    }

public:
    FourWheeler()
    {
        cout << "FourWheeler constructor";
        noOfWheel = 4;
    }
    float getFuelCapacity()
    {
        return (fuelCapacity);
    }
    virtual void ignesion();
    
};
class Car : public FourWheeler
{
public:
    Car()
    {
        setFuelCapacity(100);
        cout << "Car constructor";
    }
    void ignesion(){
        cout<<"engined started silently";
    }
};
int main()
{
    Car obj;
    obj.ignesion();
}