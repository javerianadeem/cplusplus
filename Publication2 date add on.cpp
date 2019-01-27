#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class publication
{
	private:
		string title;
		float price;
	public:
		void getdata()
		{
			cout<<"\nEnter title of book ";
			cin>>title;
			cout<<"Enter price ";
			cin>>price;
		}
		void showdata()
		{
			cout<<"Title is "<<title;
			cout<<"\nPrice is "<<price;
		}
};
class publication2:public publication
{
	private:
		int month,day,year;
		
	public:
		void getdata()
		{
			publication::getdata();
			cout<<"Enter day ";
			cin>>day;
			cout<<"Enter month ";
			cin>>month;
			cout<<"Enter year ";
			cin>>year;
		}
		void showdata()
		{
			publication::showdata();
			cout<<"\nDate is "<<day<<"/"<<month<<"/"<<year<<endl;
		}
	
};
class book:public publication2
{
	private:
		int count;
	public:
		void getdata()
		{
			publication2::getdata();
			cout<<"Enter number of pages ";
			cin>>count;
		}
		void showdata()
		{
			publication2::showdata();
			cout<<"\nPages are "<<count;
		}
};
class tape:public publication2
{
	private:
		float min;
	public:	
		void getdata()
		{
			publication2::getdata();
			cout<<"Enter number of minutes ";
			cin>>min;
		}
		void showdata()
		{
			publication2::showdata();
			cout<<"\nMinutes are "<<min;
		}
};
int main()
{
	publication2 p1;
	book b1;
	tape t1;
	p1.getdata();
	p1.showdata();
	
	b1.getdata();
	b1.showdata();
	t1.getdata();
	t1.showdata();
}
