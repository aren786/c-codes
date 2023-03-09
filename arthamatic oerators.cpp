//take two integeer no. as input
//perform -add,sub,div,multiply,division modules
//take input from the user to know which operation to perform

#include<iostream>
using namespace std;
int main()
{

int a,b;
char operation;
cout<<"enter operator(+,-,*,/,):";
cin>>operation;
cout<<"enter two input:\n";
cin>>a;
cout<<endl;
cin>>b;
switch (operation) 
{
case '+':
cout<<"adition of numbers a and b"<<a<<endl<<b<<a+b;
break;
case '-':
cout<<"subtraction of numbers a and b"<<a<<endl<<b<<a-b;
break;
case '*':
cout<<"multiplication of numbers a and b"<<a<<endl<<b<<a*b;
break;
case '/':
cout<<"dividing of numbers a and b"<<a<<endl<<b<<a/b;
break;
default:
	cout<<operation<<" is not a valid statement";
}
}

