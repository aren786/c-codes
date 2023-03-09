#include<iostream>
#include<string.h>
using namespace std;
class message 
{
	char msg[23];
	public: message();
	message(message&);
};
message::message()
{
	cout<<"\n enter the message";
	gets(msg);
}
message::message(message &obj)
{cout<<obj.msg;}
int main()
{
	message obj1;
	cout<<endl;
	message obj2(obj1);
	cout<<endl;
	message obj3(obj1);
}
