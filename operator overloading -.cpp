#include<iostream>
using namespace std;
class Integer
{
	private:
		int a,b;
	public:
		void input(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"a is "<<a<<endl;
			cout<<"b is "<<b<<endl;
		}
		Integer operator-()
		{
			Integer temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
};
int main()
{
	Integer i1,i2;
	i1.input(4,5);
	i1.display();
	i2=-i1;
	i2.display();
}
