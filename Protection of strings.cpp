///////////fuzooooolllll questionnnnn////////////////



#include<iostream>
#include<string.h>
using namespace std;
enum{SZ=80
};
class String{
	protected:
		char str[SZ];
	public:	
		String()
		{
			str[0]='\0';
		}
		String(char s[])
		{
			strcpy(str,s);
		}
		void display() const
		{
			cout<<str;
		}
		void prot(String s2)
		{
			if(strlen(str)+strlen(s2.str)<SZ)
			{
				strcat(str,s2.str);
			}
			else
			cout<<"\nString is too long";
		}
};
class Pstring:public String
{
	public:
		Pstring()
		{}
		Pstring(char s[])
		{
			int len=strlen(s);
			if(len<SZ)
			strcpy(str,s);
			else
			for(int i=0;i<SZ;i++)
			{
				str[i]=i;
			}
		}
};
int main()
{
	Pstring s1,s2;
	s1="Javeria Nadeem is a student ofned university of enineeering and technology.heloo";
	s2="HelloWorld!";
	s1.display();
	cout<<endl;
	s2.display();
	return 0;
}
