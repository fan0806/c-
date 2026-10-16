#include<iostream>
using namespace std;
void swap(int *a, int *b);
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{   
	int arr[] = { 5,9,2,4,0,6,1,7,3,8 };
	int len = sizeof( arr) / sizeof (arr[0]);
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	for (int a = 0;a < len;a++)
	{
		cout << arr[a] << endl;
	}
	return 0;
}