#include<iostream>
using namespace std;
class person
{
	protected:
		char name[40];
	public:
		void getname()
		{
			cout<<"Enter name : ";
			cin>>name;
		}
		void putname()
		{
			cout<<"Name is : "<<name<<endl;
		}
		virtual void getdata()=0;
		virtual bool isOutstanding()=0;		
};
class student:public person
{
	private:
		float gpa;
	public:	
		void getdata()
		{
			person::getname();
			cout<<"Enter gpa of student : ";
			cin>>gpa;
		}
		bool isOutstanding()
		{
			return(gpa>3.5)?true:false;
		}
};
class professor:public person
{
	private:
		int numpubs;
	public:	
		void getdata()
		{
			person::getname();
			cout<<"Enter number of professor's publication : ";
			cin>>numpubs;
		}
		bool isOutstanding()
		{
			return(numpubs>100)?true:false;
		}
};
int main()
{
	person *persptr[100];
	int n=0;
	char choice;
	do
	{
		cout<<"Enter student or professor(s/p) : ";
		cin>>choice;
		if(choice=='s')
		   persptr[n]=new student;
		else 
		   persptr[n]=new professor;
		   persptr[n++]->getdata();
		   cout<<"Enter another (y/n) : ";
		   cin>>choice;   
	}
	while(choice=='y');
		
	for(int j=0;j<n;j++)
	{
		persptr[j]->putname();
		if(persptr[j]->isOutstanding())
		cout<<"This person is outstanding!\n";
	}
}
