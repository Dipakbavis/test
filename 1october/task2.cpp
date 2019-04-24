#include<iostream>
using namespace std;
class Mathematical
{

	public:
		int a,b;
		void getdata()
		{
			cout<<"\n Enter the First Number:";
			cin>>a;
			cout<<"\n Enter the second Number:";
			cin>>b;
		}
		void display()
		{
			cout<<"\n Number a is :"<<a<<"\n Number b is"<<b;
		}
	
};
class Multiplication: virtual public Mathematical
{
	
	public:
		int mul=0;
		void getdata1()
		{
			mul=a*b;
			
		}
		void display1()
		{
			cout<<"\n *****Multiplication is***** :"<<mul;
		}
};
class Division:virtual public Mathematical
{

	public:
		int div=0;
		void getdata2()
		{
			div=a/b;
			
		}
		void display2()
		{
			cout<<"\n ****Division is**** :"<<div;
		}
};
class Addition:public Multiplication,public Division
{
	
	public:
		int add;
		void getdata3()
		{
			add=mul+div;
		}
			void display3()
		{
			cout<<"\n Addition is:"<<add;
		}
};

int main()
{
	/*
	cout<<"\n Multiplication";
	Multiplication m;
	m.getdata();
	m.display();
	
	m.getdata1();
	m.display1();
	
	
	cout<<"\n Division";
	Division d;
	d.getdata();
	d.display();
	
	d.getdata2();
	d.display2();
	
	*/


	Addition A;
	
	A.getdata();
	A.display();
	
	A.getdata1();
	A.display1();
	
	A.getdata2();
	A.display2();
	
	A.getdata3();
	A.display3();
	
	return 0;
}

