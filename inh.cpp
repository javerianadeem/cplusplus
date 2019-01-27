#include<iostream>
using namespace std;
class vehicle
{
	protected:
		int veh;
	public:
	    vehicle():veh(0)
			{	}	
		void input()
		{
			cout<<"Enter number of vehicles";
			cin>>veh;
		}
		void display()
		{
			cout<<"Total vehicles are "<<veh<<endl;
		}
};
class car:public vehicle
{
	protected:
		string name;
	public:	
		car():vehicle()
		{}
		void input()
		{
			vehicle::input();
			cout<<"Enter car name ";
			cin>>name;
		}
		void display()
		{
			vehicle::display();
			cout<<"car name is "<<name<<endl;
		}
};
class civic:public car
{
	private:
		int no;
	public:	
		void input()
		{
			car::input();
			cout<<"Enter car number ";
			cin>>no;
		}
		void display()
		{
			car::display();
			cout<<"Car number is "<<no<<endl;
		}
		
};
int main()
{
	civic c1;
	c1.input();
	c1.display();
}
