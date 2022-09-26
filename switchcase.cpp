#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter  number"<<endl;
  cin>>n;
  n /=10;


  switch(n)
  {
    case 10:
    cout<<"A";
    break;
    case 9:
    cout<<"A";
    break;
    case 8:
    cout<<"B";
    break;
    case 7:
    cout<<"B";
    break;
    case 6:
    cout<<"C";
    break;
    case 5:
    cout<<"C";
    break;
    case 4:
    cout<<"E";
    break;
    case 3:
    cout<<"E";
    break;
    default:
    cout<<"fail";
  }

}