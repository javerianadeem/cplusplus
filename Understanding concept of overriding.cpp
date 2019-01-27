#include<iostream>
using namespace std;
class car
{
	public:
		void shiftgear()
		{
		}
		void s2()
		{
		}
};
class sportscar:public car
{
	public:
		void shiftgear()
		{
		}
		void s2(int x)
		{
		}
};
int main()
{
	sportscar s1;
	s1.shiftgear(); // sports car wala func chalega
	//s1.s2(); genetrated error
}
