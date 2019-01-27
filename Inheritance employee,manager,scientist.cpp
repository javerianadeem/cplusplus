#include<iostream>
#define LEN 80
using namespace std;
class Employee
{
	//private:
		static int id;
		static char name[LEN];
	//public:	
		static void getdata()
		{
			cout<<"Enter name ";
			cin>>name;
			cout<<"\nEnter id ";
			cin>>id;
		}
		static void showdata()
		{
			cout<<"Name is "<<name;
			cout<<"\nIdentification number is "<<id;
		}
};/*
class Manager:public Employee
{
	private:
		static char title[LEN];
		static float dues;
	public:
		void getdata()
		{
			Employee::getdata();
			cout<<"\nEnter title ";
			cin>>title;
			cout<<"\nEnter golf club dues ";
			cin>>dues;
		}
		void showdata()
		{
			Employee::showdata();
			cout<<"\nTitle is "<<title;
			cout<<"\nGold club dues "<<dues;
		}
};*/
int main()
{
	Employee m1,m2;
	cout<<"\nEnter data for manager\n";
	m1.getdata();
	cout<<"\nShowing data for manager\n";
	m1.showdata();
}
