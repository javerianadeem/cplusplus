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
			cout<<"Enter feet "<<endl;
			cin>>feet;
			cout<<"Enter inches "<<endl;
			cin>>inches;
		}
		void display()
		{
			cout<<"Feet "<<feet<<endl;
			cout<<"Inches "<<inches<<endl;
		}
		Distance operator+(Distance s)
		{
			Distance temp;
			temp.feet=s.feet+feet;
			temp.inches=s.inches+inches;
			if(temp.inches>=12.0)
			{
				temp.inches-=12;
				temp.feet++;
			}
			return temp;
		}
};
int main()
{
	Distance d1,d2,d3,d4;
	d1.input();
	//d1.display();
	d2.input();
	//d2.display();
	d3=d1+d2;
	d3.display();
}
