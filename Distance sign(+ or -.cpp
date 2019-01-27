#include<iostream>
using namespace std;
enum posneg{pos,neg};
class Distance
{
	protected:
		int feet;
		float inches;
	public:
		Distance():feet(0),inches(0.0)
		{}
		Distance(int ft,float in):feet(ft),inches(in)
		{}
		void getdata()
		{
			cout<<"Enter feet ";
			cin>>feet;
			cout<<"Enter inches ";
			cin>>inches;
		}
		void showdata()
		{
			cout<<"Feet "<<feet;
			cout<<"\nInches "<<inches;
		}
};
class DistSign:public Distance
{
	private:
		posneg sign;
	public:	
		DistSign():Distance()
		{
			sign=pos;
		}
		DistSign(int ft,float in,posneg sg=pos):Distance(ft,in)
		{
			sign=sg;
		}
		void getdata()
		{
			Distance::getdata();
			char ch;
			cout<<"Enter sign (+ or -) ";
			cin>>ch;
			sign=(ch=='+')?pos:neg;
		}
		void showdata()
		{
			cout<<((sign==pos)?"(+)":"(-)");
			Distance::showdata();
		}
};
int main()
{
	DistSign alpha;
	alpha.getdata();
	DistSign beta(11,6.25);
	DistSign gamma(100,5.5,neg);
	
	cout<<"\nAlpha = ";
	alpha.showdata();
	cout<<"\nBeta = ";
	beta.showdata();
	cout<<"\nGamma = ";
	gamma.showdata();
	
}
