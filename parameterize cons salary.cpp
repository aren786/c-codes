#include <iostream>
using namespace std;
class employee
{
	public:
		int id;
		string name;
		float salary;
		employee(int,string,float);
};
employee::employee(int i,string n,float s)
{
	id=i;
	name=n;
	salary=s;
	cout<<"\n id is"<<id;
	cout<<"\n name is"<<name;
	cout<<"\n salary is"<<salary;
}
int main()
{
	employee e1=employee(1,"xyz",2300.0);
	employee e2=employee(2,"abc",7800.0);
}
