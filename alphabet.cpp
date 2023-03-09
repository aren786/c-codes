#include<iostream>
using namespace std;
class check
{
	public:
		char ch;
		charactercheck();
};

//alphabet check
check::charactercheck()
{
	if(ch>='a'&& ch <='z')
	{
		cout<<ch<<"is small alphabet";
	}
	else if(ch>='A'&& ch <='Z')
	{
		cout<<ch<<"is capital alphabet";
	}
	
		else if(ch>='0'&& ch<='9')
		{
			cout<<ch<<"is digit";
		
		}
		else
        {
	          cout<<ch<<"is special character";
        }
}
int main()
{
	check c;
	cout<<"Enter a character"<<c.ch;
	cin>>c.ch;
	c.charactercheck();
}
