#include <iostream>
using namespace std;
class construct
{
	int a,b,temp;
	public:
		construct()
		{
			a=12;
			b=34;
			cout<<"a is :"<<a<<"\n"<<"b is:"<<b<<endl;
			swap();
		}
		void swap()
		{
			temp =a;
			a=b;
			b=temp;
			cout<<"after swaping a and b :"<<a<<" "<<b;
		}
		
};
int main()
{
	construct c;
	return 0;
}
