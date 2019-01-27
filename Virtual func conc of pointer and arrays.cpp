#include<iostream>
using namespace std;
class A
{
	public:
		void f1()
		{
			cout<<"Hello this is based class function f1 "<<endl;
		}
		virtual void f2()
		{
			cout<<"Hello this is based class function f2 "<<endl;
		}
		virtual void f3()
		{
			cout<<"Hello this is based class function f3 "<<endl;
		}
		virtual void f4()
		{
			cout<<"Hello this is based class function f4 "<<endl;
		}
};
class B:public A
{
	public:
		void f1()
		{
			cout<<"Hello this is derived class function f1 "<<endl;
		}
		void f2()
		{
			cout<<"Hello this is derived class function f2 "<<endl;
		}
		void f4(int x)
		{
			cout<<"Hello this is derived class function f4 "<<endl;
		}
};
int main()
{
	A *p,*q,o1;
	B o2;
	p=&o1;
	p->f1(); //A   //EB
	p->f2(); //A   //LB
	p->f3(); //A   //LB
	p->f4(); //A   //LB
	// p->f4(5);   //EB //A This will give error because theres no function f4 in base class that has arguments
	q=&o2;
	q->f1(); //A   //EB
	q->f2(); //B   //LB
	q->f3(); //A   //LB
	q->f4(); //A   //LB
	// p->f4(5);   //EB //A This will give error because theres no function f4 in base class that has arguments
	
}
