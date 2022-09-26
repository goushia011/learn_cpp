#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Area
{
    private:
    float radius;
    public:
    float setRadius(float r)
    {
        radius=r;
    }
    float findArea()
    {
        return 3.14*pow(radius,2);
    }
};

int main() {
    Area s1,s2;
    s1.setRadius(5);
    cout<<"are of cirle1="<<s1.findArea()<<endl;
    s2.setRadius(8.6);
    cout<<"area of circle2="<<s2.findArea();
}
