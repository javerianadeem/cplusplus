#include<iostream>
#include<string.h>
using namespace std;
class String
{
	private:
		char str[20];
	public:	
		String()
		{
			strcpy(str,"");
		}
		String(char s[])
		{
			strcpy(str,s);
		}
		void input()
		{
			cout<<"Enter string ";
			cin>>str;
		}
		void display()
		{
			cout<<str;
		}
		bool operator==(String s)
		{
			return(strcmp(str,s.str)==0)?true:false;
		}
};
int main()
{
	String s1("Javeria");
	String s2("Javeria"),s3;
	//s1.input();
	//s2.input();
	cout<<"String 1 is ";
	s1.display();
	cout<<"\nString 2 is ";
	s2.display();
	if(s1==s2)
	{
		cout<<"\nStrings are equal ";
	}
	else
	cout<<"\nStrings are not equal";
}
