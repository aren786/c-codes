#include <iostream>
using namespace std;
class check
{
	public:
		int n,r,count=0;
		digitcheck();
};

//alphabet check
check::digitcheck()
{
cout<<"\n please enter any number\n";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		count++;
		if(r%2==0)
		{
			cout<<r<<"is even digit\n";
		}
		
			else
			{
				cout<<r<<"is odd digit\n";
			}
			
			n = n/10;
	}
}
int main()
{
	check c;
	c.digitcheck();
}
