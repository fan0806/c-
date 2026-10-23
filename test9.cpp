#include<iostream>
using namespace std;
class Person
{
public:
	int m_age;
	 int *m_height;
	Person()
	{
		cout << "00" << endl;
	}
	Person(int a,int b)
	{
		m_age = a;
		m_height=new int (b);
		cout << "01" << endl;
	}
	Person(const Person &p)
	{
		m_age = p.m_age;
		//m_height = p.m_height;默认拷贝
		m_height = new int(p.m_age);
		cout << "03" << endl;
	}
	~Person()
	{   
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "02" << endl;
	}
};
void test0()
{
	Person p(18,160);
	Person p1(p);
	cout << p1.m_age << endl;
	cout << *p1.m_height << endl;
}
int main()
{
	test0();
	
	return 0;
}