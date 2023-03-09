#include <iostream>
using namespace std;
digitcheck()
{
	int n,r,count=0;
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
    digitcheck();
    cout<<"\nNumber of digits in a given number="<<cout;
	

}
		
	
	

