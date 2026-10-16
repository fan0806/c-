#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 5;
	int b = 6;
	cout << a << endl;
	cout << b << endl;
	int* p = &a;
	int* q = &b;
	cout << *p << endl;
	cout << *q << endl;
	swap(&a, &b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}