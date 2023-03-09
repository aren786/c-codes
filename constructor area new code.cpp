#include <iostream>
using namespace std;
class rectangle 
{
	private:
		int length,breadth;
		public:
			rectangle()
			
{
	length=5,breadth=6;
}
int area()
{
	int a =(length*breadth);
	cout<<"area is"<<a;
}
};
int main()
{
	rectangle r1;
	r1.area();
}

