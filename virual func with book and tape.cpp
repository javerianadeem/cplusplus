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
		virtual void getdata()
		{
			cout<<"\nEnter title of book : ";
			getline(cin,title);
			cout<<"Enter price : ";
			cin>>price;
		}
		virtual void putdata()
		{
			cout<<"\nTitle is : "<<title;
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
	publication *pub[100];
	int i,n=0;
	char choice;
	do
	{
		cout<<"Enter book or tape(b/t) : ";
		cin>>choice;
		if(choice=='b')
		   pub[n]=new book;
		else 
		   pub[n]=new tape;
		   pub[n++]->getdata();
		   cout<<"Enter another (y/n) : ";
		   cin>>choice;   
	}
	while(choice=='y');
	
	for(i=0;i<n;i++)
	{
		pub[i]->putdata();
	}
}
