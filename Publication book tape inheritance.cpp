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
			cout<<"\nEnter title of book : ";
			getline(cin,title);
			cout<<"Enter price : ";
			cin>>price;
		}
		void putdata()
		{
			cout<<"Title is : "<<title;
			cout<<"\nPrice is : "<<price;
		}
};
class book:public publication
{
	private:
		int count;
	public:
		void getdata()
		{
			fflush(stdin);
			publication::getdata();
			cout<<"Enter number of pages : ";
			cin>>count;
		}
		void putdata()
		{
			publication::putdata();
			cout<<"\nPages are : "<<count;
		}
};
class tape:public publication
{
	private:
		float min;
	public:	
		void getdata()
		{
			fflush(stdin);
			publication::getdata();
			cout<<"Enter number of minutes : ";
			cin>>min;
		}
		void putdata()
		{
			publication::putdata();
			cout<<"\nMinutes are : "<<min;
		}
};
int main()
{
	book b1;
	tape t1;
	cout<<"***For Book Class***"<<endl;
	b1.getdata();
	b1.putdata();
	cout<<"\n***For Tape Class***"<<endl;
	t1.getdata();
	t1.putdata();
}
