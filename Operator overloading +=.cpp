#include<iostream>
using namespace std;
class Distance
{
	private:
		int feet;
		float inches;
	public:	
		Distance():feet(0),inches(0.0)
		{}
		Distance(int ft,float in):feet(ft),inches(in)
		{}
		void input()
		{
			cout<<"Enter feet ";
			cin>>feet;
			cout<<"\nEnter inches ";
			cin>>inches;
		}
		void display()
		{
			cout<<"\nFeet "<<feet;
			cout<<"\nInches "<<inches;
		}
		bool operator+=(Distance d)
		{
			feet+=d.feet;
			inches+=d.inches;
			if(inches>=12.0)
			{
				inches-=12.0;
				feet++;
			}
		}
};
int main()
{
	Distance d1,d3,d4;
	d1.input();
	Distance d2(6,4.3);
	d1.display();
	d2.display();
	d1+=d2;
	d1.display();
}
