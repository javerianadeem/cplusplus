#include<iostream>
using namespace std;
class Counter
{
	protected:
		unsigned int count;
	public:	
		Counter():count(0)
		{}
		Counter(int c):count(c)
		{}
		unsigned int getcount()
		{
			return count;
		}
		Counter operator++()
		{
			return Counter(++count);
		}
};
class Counter2:public Counter
{
	public:
		Counter2():Counter()
		{}
		Counter2(int c2):Counter(c2)
		{}
		Counter2 operator--()
		{
			return Counter2(--count);
		}
};
int main()
{
	Counter2 c1;
	Counter2 c2(100);
	cout<<"C1 "<<c1.getcount();
	cout<<"\nC2 "<<c2.getcount();
	++c1;++c1;++c1;
	cout<<"\nC1 "<<c1.getcount();
	--c2;
	--c2;
	cout<<"\nC2 "<<c2.getcount();
	Counter2 c3=--c2;
	cout<<"\nC2 "<<c3.getcount();
}
