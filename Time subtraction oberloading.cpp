#include<iostream>
using namespace std;
class Time
{
	private:
		int hour,min,sec;
	public:	
		Time():hour(0),min(0),sec(0)
		{}
		Time(int h,int m,int s):hour(h),min(m),sec(s)
		{}
		void input()
		{
			cout<<"Enter hours ";
			cin>>hour;
			cout<<"\nEnter minutes ";
			cin>>min;
			cout<<"\nEnter seconds ";
			cin>>sec;
		}
		void display()
		{
			cout<<"Hours "<<hour<<endl;
			cout<<"Minutes "<<min<<endl;
			cout<<"Seconds "<<sec<<endl;
		}
		Time operator-(Time t)
		{
			Time temp;
			temp.hour=t.hour-hour;
			temp.min=t.min-min;
			if(temp.min>=60)
			{
				temp.min-=60;
				temp.hour++;
			}
			temp.sec=t.sec-sec;
			if(temp.sec>=60)
			{
				temp.sec-=60;
				temp.min++;
			}
			return temp;
		}
		Time operator*(Time t)
		{
			Time temp;
			temp.hour=t.hour*hour;
			temp.min=t.min*min;
			if(temp.min>=60)
			{
				temp.min-=60;
				temp.hour++;
			}
			temp.sec=t.sec*sec;
			if(temp.sec>=60)
			{
				temp.sec-=60;
				temp.min++;
			}
			return temp;
		}
};
int main()
{
	Time t1,t2,t3;
	t1.input();
	t2.input();
	//t3=t1-t2;
	t3=t1-t2;
	t3.display();
}

