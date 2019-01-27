#include<iostream>
using namespace std;
class integer
{
	private:
		int a;
	public:	
		void input(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<"a is "<<a<<endl;
		}
		integer operator++()
		{
			integer temp;
			temp.a=++a;
			return temp;
		}
		integer operator++(int)            // passing int in parameter is of no use but we have to differentiate b/w pre and post increment
		{
			integer temp;
			temp.a=a++;
			return temp;
	    }
	    integer operator--()
		{
			integer temp;
			temp.a=--a;
			return temp;
		}
		integer operator--(int)            // passing int in parameter is of no use but we have to differentiate b/w pre and post increment
		{
			integer temp;
			temp.a=a--;
			return temp;
	    }
	    
	    
};
int main()
{
	integer i1,i2;
	i1.input(5);
	i1.display();
	// i2=++i1;
	i2=i1++;
	// ++i1;
	i1++;
	i1.display();
	i2.display();
	i1--;
	i1.display();
}
