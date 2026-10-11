#include<iostream>
#include<random>
using namespace std;
int main()
{
	int a = rand() % 100 + 1;
	int b = 0;
	int c = 0;
	cout << "the num=" << endl;
	cin >> b;
	while (b != a)
	{
		if (b > a)
		{
			cout << "too big" << endl;
			c++;
			cin >> b;
		}
		else
		{
			cout << "too small" << endl;
			c++;
			cin >> b;
		}
	}
	cout << "the num=" << a << endl;
	return 0;
}

