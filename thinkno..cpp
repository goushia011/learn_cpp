#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n, t;
	cout << "think of a no.\n";
	getch();
	cout << "make it double\n";
	getch();
	cout << "add 10 from other\n";
	getch();
	cout << "make the no. half\n";
	getch();
	cout << "return 10\n ";
	getch();
	cout << "you got 5 no.\n";
	getch();
	cout << "what was the no.";
	cin >> n;
	t = n;
	cout << "make it double " << (n = n * 2) << endl;
	cout << "add 10" << (n = n + 10) << endl;
	cout << "half the no." << (n = n / 2) << endl;
	cout << "return the no." << (n = n - t) << endl;
}
