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
		bool operator<(Distance s)
		{
			Distance temp,comp;
			temp.feet=feet+inches/12;
			comp.feet=s.feet+s.inches/12;
			return(temp.feet<comp.feet)?true:false;
		}
};
int main()
{
	Distance d1,d3,d4;
	d1.input();
	Distance d2(6,8.6);
	cout<<"Distance 1 ";
	d1.display();
	cout<<"Distance 2 ";
	d2.display();
	if(d1<d2)
	cout<<"Distance 1 is less than Distance 2 ";
	else
	cout<<"\nDistance 1 is greater than or equal to Distance 2 ";
}

