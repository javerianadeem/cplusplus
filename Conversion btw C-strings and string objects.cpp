#include<iostream>
#define SZ 80
#include<string.h>
using namespace std;
class String{
	private:
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
		operator char*()
		{
			return str;
		}
};
int main()
{
	String s1;
	char xstr[]="Javeria Nadeem ";
	s1=xstr;
	s1.display();
	String s2="Bonne Anneel";
	cout<<static_cast<char*>(s2);
	cout<<endl;
	return 0;
}
