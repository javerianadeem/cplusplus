#include<iostream>
using namespace std;
class person
{
	public:
		virtual void fun()=0;
		void f1()
		{
			cout<<"Hello i am f1 from base class"<<endl;
		}
};
class student:public person
{
	public:
		void fun()
		{
		cout<<"Hello I am fun function from derived class"<<endl;
	//	person::f1();
		}
		void f1()
		{
			cout<<"Hello i am f1 from derived class"<<endl;
		}
};
int main()
{
	person *p1;    //Cannot make object of an abstract base class
	student s1;
	p1->f1();
	s1.f1(); //student
	s1.fun();  //student
}
