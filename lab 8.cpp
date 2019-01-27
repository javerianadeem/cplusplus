#include<iostream>
using namespace std;
class Shape
{	protected:
		double width;
		double height;

	public:	
		void get_data(double w,double h)
		{
			width=w;
			height=h;
		}

		virtual int display_area(void)=0;
}; 

class Rectangle:public Shape
{	
    public:
	int display_area(void)
	{	
		return(width*height);
	}
};

class Triangle:public Shape
{	
    public:
	int display_area(void)
	{
			return(width*height/2);
	}
};

int main()
{
	Rectangle r1;
	Triangle t1;
	Shape *ptr1,*ptr2;
	ptr1=&r1;
	ptr2=&t1;
	ptr1->get_data(5,6);
	ptr2->get_data(7,8);
	cout<<"Area of rectangle is "<<ptr1->display_area()<<endl;
	cout<<"Area of triangle is "<<ptr2->display_area()<<endl;
}
