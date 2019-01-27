#include<stdlib.h>
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
class Sales{
	private:
		float m1,m2,m3;
	public:
		void getdata()
		{
		cout<<"\nEnter sales for month 1 ";
		cin>>m1;
		cout<<"\nEnter sales for month 2 ";
		cin>>m2;
		cout<<"\nEnter sales for month 3 ";
		cin>>m3;
		}
		void showdata()
		{
			cout<<"\nSales for month 1 "<<m1;
			cout<<"\nSales for month 2 "<<m2;
			cout<<"\nSales for month 3 "<<m3;
		}
};

class book:public publication,public Sales
{
	private:
		int count;
	public:
		void getdata()
		{
			publication::getdata();
			Sales::getdata();
			cout<<"Enter number of pages ";
			cin>>count;
		}
		void showdata()
		{
			publication::showdata();
			Sales::showdata();
			cout<<"\nPages are "<<count;
		}
};
class tape:public publication{
	private:
		float min;
	public:	
		void getdata()
		{
			publication::getdata();
			cout<<"Enter number of minutes ";
			cin>>min;
		}
		void showdata()
		{
			publication::showdata();
			cout<<"\nMinutes are "<<min;
		}
};
class disk:public publication{
	private:
		char disktype[3];
	public:	
		void getdata()
		{
			cout<<"Enter (CD or DVD) ";
			cin>>disktype;
			if((strcmp(disktype,"CD")==0) || (strcmp(disktype,"DVD")==0))
			publication::getdata();
			else
			{
			cout<<"You enter wrong choice";
			exit(0);
			}
			}
		void showdata()
		{
			publication::showdata();
			cout<<"\nDisk type is "<<disktype;
		}
};
int main()
{
	publication p1;
	book b1;
	tape t1;
	Sales s1;
	disk d1;
	d1.getdata();
	d1.showdata();
	/*p1.getdata();
	p1.showdata();
	b1.getdata();
	b1.showdata();
	t1.getdata();
	t1.showdata();
	*/
}
