#include<iostream>
using namespace std;
int main()
{
	int a = 1;
	int b = 1;
	for (a = 1;a < 10;a++)
	{
		for (b = 1;b <= a;b++)
		{
			cout << b << "*" << a << "=" << a * b <<" ";
			if (a == b)
			{
				cout << endl;
			}
		} 
	}
	return 0;
}