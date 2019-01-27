#include<iostream>
#define LEN 80
using namespace std;
class Employee
{
	private:
		int id;
		char name[LEN];
	public:	
		void getdata()
		{
			cout<<"Enter name ";
			cin>>name;
			cout<<"\nEnter id ";
			cin>>id;
		}
		void showdata()
		{
			cout<<"Name is "<<name;
			cout<<"\nIdentification number is "<<id;
		}
};
class Manager:public Employee
{
	private:
		char title[LEN];
		float dues;
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
};
class Scientist:public Employee
{
	private:
		int articles;
	public:
		void getdata()
		{
			Employee::getdata();
			cout<<"\nEnter number of articles published ";
			cin>>articles;
		}
		void showdata()
		{
			Employee::showdata();
			cout<<"\nNumber of articles published "<<articles;
		}
};
class Laborer:public Employee
{
	
};
class Foreman:public Laborer
{
	private:
		float quotas;
	public:	
		void getdata()
		{
			Laborer::getdata();
			cout<<"\nEnter quotas ";
			cin>>quotas;
		}
		void showdata()
		{
			Laborer::showdata();
			cout<<"\nQuotas "<<quotas;
		}
};
int main()
{
	Manager m1,m2;
	Laborer l1;
	Foreman f1;
	Scientist s1;
	cout<<"\nEnter data for scientist\n";
	s1.getdata();
	cout<<"\nEnter data for manager\n";
	m1.getdata();
	cout<<"\nEnter data for laborer\n";
	l1.getdata();
	cout<<"Enter data for foreman\n";
	f1.getdata();
	cout<<"\n****Showing data for scientist****\n";
	s1.showdata();
	cout<<"\n****Showing data for manager****\n";
	m1.showdata();
	cout<<"\n****Showing data for laborer****\n";
	l1.showdata();
	cout<<"****Showing data for foreman\n****";
	f1.showdata();
}
