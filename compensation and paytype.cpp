#include<iostream>
#define LEN 80
using namespace std;
class Employee{
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
class Employee2:public Employee
{
	private:
		double comp;
		enum paytype{hourly,weekly,monthly
		};
		paytype period;
		public:
			void getdata()
			{
				char type;
				Employee::getdata();
				cout<<"Enter compensation ";
				cin>>comp;
				cout<<"Enter payment period type(h,w,m) ";
				cin>>type;
				switch(type)
				{
					case 'h':
						period=hourly;
						break;
					case 'w':
						period=weekly;
						break;
					case 'm':
						period=monthly;
						break;		
				}
			}
			void showdata()
			{
				Employee::showdata();
				cout<<"\nEmployee compensation is "<<comp;
				switch(period)
				{
					case hourly:
						cout<<" hourly";
						break;
					case weekly:
						cout<<" weekly";
						break;
					case monthly:
						cout<<" monthly";
						break;
				}
			}
};
class Manager:public Employee2
{
	private:
		char title[LEN];
		float dues;
	public:
		void getdata()
		{
			Employee2::getdata();
			cout<<"\nEnter title ";
			cin>>title;
			cout<<"\nEnter golf club dues ";
			cin>>dues;
		}
		void showdata()
		{
			Employee2::showdata();
			cout<<"\nTitle is "<<title;
			cout<<"\nGold club dues "<<dues;
		}
};
class Scientist:public Employee2
{
	private:
		int articles;
	public:
		void getdata()
		{
			Employee2::getdata();
			cout<<"\nEnter number of articles published ";
			cin>>articles;
		}
		void showdata()
		{
			Employee2::showdata();
			cout<<"\nNumber of articles published "<<articles;
		}
};
class Laborer:public Employee2
{
	
};
int main()
{
	Manager m1,m2;
	Laborer l1;
	Scientist s1;
	
	cout<<"\nEnter data for scientist\n";
	s1.getdata();
	cout<<"\nEnter data for manager\n";
	m1.getdata();
	cout<<"\nEnter data for laborer\n";
	l1.getdata();
	cout<<"\nShowing data for scientist\n";
	s1.showdata();
	cout<<"\nShowing data for manager\n";
	m1.showdata();
	cout<<"\nShowing data for laborer\n";
	l1.showdata();
}
