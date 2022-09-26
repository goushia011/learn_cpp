#include<iostream>
using namespace std;
int main()
{
	int i,j,n=1;
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<n++;
		}
		cout<<endl;
	}  
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<n++;
		}
		cout<<endl;
	}
}
