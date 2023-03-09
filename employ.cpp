// problem- in a department there are are number of employ. you are required to ollect their names and respective salaries.itb is time of yearly increment so design a program to update the saleries as following
//if salary <10000
//sal=sol*1.10;
//else if salary <20000
//sal =sal*1.125;
//else sal=sal*1015;
#include <iostream>
using namespace std;
class emprecords
{
	int empno;
	float sal;
	public:
		void input()
		{
			cout<<"Empno";
			cin>>Empno;
			cout<<"salary:";
			cin>>sal;
		}
		void output()
		{
			cout<<"\t"<<empno<<"\t"<<sal<<"\n";
		}
		void update()
		{
			if(sal<10000)
			sal=sal*1.10;
			else if(sal<20000)
			sal=sal*1.125;
			else 
			sal=sal*1.15;
		}
};
int main()
{
	cout
}
