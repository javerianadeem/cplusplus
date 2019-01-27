#include<iostream>
using namespace std;
class Father
{
	protected:
		int age;
	public:	
		Father(int x)
		{
			age=x;
		}
		virtual void iam()
		{
			cout<<"I am father. My age is "<<age<<endl;
		}
};
class Son:public Father
{
	public:
		Son(int x):Father(x)
		{
		}
		void iam()
		{
			cout<<"I am son. My age is "<<age<<endl;
		}
};
class Daughter:public Father
{
	public:
		Daughter(int x):Father(x)
		{
		}
		void iam()
		{
			cout<<"I am daughter. My age is "<<age<<endl;
		}
};
int main()
{
	Father *ptr;
	Father f1(50);
	Son s1(20);
	Daughter d1(16);
	f1.iam();
	ptr=&s1;
	s1.iam();
	ptr=&d1;
	d1.iam();
	
}
