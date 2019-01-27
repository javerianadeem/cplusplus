#include<iostream>
using namespace std;
class A
{
	public:
		virtual void f1() //if we dont write virtuall then base class function will run. to overcome this we will do late binding of func using keyword virtual
		{
			cout<<"This is a base class function f1";
		}
		
};
class B:public A
{
	public:
		void f1()
		{
			cout<<"This is a derived class function f1";
		}
		void f2()
		{
			cout<<"This is a derived class function f2";
		}
};
int main()
{
	A *p,o1;
	B o2;
	p=&o2;  //pointer p is a object pointer of base class but we assign address of object o2 which is a object of base class
	p->f1(); 
}
