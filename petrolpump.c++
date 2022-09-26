#include<iostream>


using namespace std;
int main()
{
	char ch;
	int amount,rate;
	int prate=100,drate=120;
	cout<<"while approaching petrol pump do you want to fill";
	cin>>ch;
	if(ch=='y')
	{
		cout<<"do you Want petrol or diesel(p/d) ";
		cin>>ch;
	   	if(ch=='p')
	   	{
	   		cout<<"fill petrol";
	   		cout<<"how many litre you want\n";
	   		cin>>amount;
	   		cout<<"rate of petrol is";
	   	    rate=prate*amount;
	   	    cout<<rate;
	   	    cout<<"in the way";
       	}
       	else if(ch=='d')
       	{
       		cout<<"fill diesel";
       		cout<<"how many litre you want\n";
       	    cin>>amount;
       	    cout<<"rate of diesel is";
	   	    rate=drate*amount;
	   	    cout<<rate;
       	    cout<<"in the way";
       	}
    }
	else
		cout<<"in the way";
}
