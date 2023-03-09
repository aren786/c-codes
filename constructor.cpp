#include <iostream>
using namespace std;
class construct
{
int a,b,c;
public:
	construct()
	{
		cout<<"enter the number of a and b\n";
		cin>>a;
		cout<<endl;
		cin>>b;
		cout<<"a is :"<<a<<"\n"<<"b is:"<<b<<endl;
		arthmatic();
	}
	void arthmatic()
	{   
		c=a+b;
		cout<<"sum of a and b is:"<<c;
		cout<<"enter the number of a and b\n";
		cin>>a;
		cout<<endl;
		cin>>b;
		int x=a*b;
		cout<<"multi of a and b is:"<<x;
		cout<<"enter the number of a and b\n";
		cin>>a;
		cout<<endl;
		cin>>b;
		int y=a-b;
		cout<<"sub of a and b is:"<<y;
	}
};
int main()
{
	construct c;
	return 0;
}
