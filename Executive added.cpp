#include<iostream>
#define LEN 80
using namespace std;
class student
{
	private:
		char school[LEN];
		char degree[LEN];
	public:	
		void getdata()
		{
			cout<<"Enter school ";
			cin>>school;
			cout<<"Enter degree (Bachelors,masters or phd) ";
			cin>>degree;
		}
		void showdata()
		{
			cout<<"School is "<<school;
			cout<<"Degree is "<<degree;
		}
};
class employee
{
	private:
		int id;
		char name[LEN];
	public:	
		void getdata()
		{
			cout<<"Enter name ";
			cin>>name;
			cout<<"Enter id ";
			cin>>id;
		}
		void showdata()
		{
			cout<<"Name is "<<name;
			cout<<"\nIdentification number is "<<id;
		}
};
class manager:public employee
{
	private:
		char title[LEN];
		float dues;
	public:
		void getdata()
		{
			employee::getdata();
			cout<<"\nEnter title ";
			cin>>title;
			cout<<"\nEnter golf club dues ";
			cin>>dues;
		}
		void showdata()
		{
			employee::showdata();
			cout<<"\nTitle is "<<title;
			cout<<"\nGold club dues "<<dues;
		}
};

class executive:private manager
{
	private:
		double bonus;
		double shares;
	public:
		void getdata()
		{
			manager::getdata();
			cout<<"Enter the executives yearly bonus ";
			cin>>bonus;
			cout<<"Enter the number of stock shares ";
			cin>>shares;
		}
		void showdata()
		{
			manager::showdata();
			cout<<"\nYearly bonus is "<<bonus;
			cout<<"\nNumber of stock shares "<<shares;
		}
};
int main()
{
	executive e1;
	e1.getdata();
	e1.showdata();
}

