#include <iostream>
using namespace std;
class rectangle
{
	private:
		double length,breadth;
		public:
			rectangle(double l, double b)
			{
				length=l,breadth=b;
			}
int area()
{
	int a=(length*breadth);
	cout<<"area is"<<a;
}
};
