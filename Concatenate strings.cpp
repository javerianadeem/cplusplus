#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		char str[200];
	public:
		void input()
		{
			cout<<"Enter string ";
			cin>>str;
		}
		void display()
		{
			cout<<"\nString is "<<str;
		}
		String operator+(String s)
		{
			String temp;
			strcpy(temp.str,str);
			strcat(temp.str,s.str);
			return temp;
		}
		
};
int main()
{
	String s1,s2,s3;
	s1.input();
	s2.input();
	s3=s1+s2;
	s3.display();
}
