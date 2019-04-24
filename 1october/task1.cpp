#include<iostream>
using namespace std;
class Mathematical
{

	public:
			int a;
		void getdata()
		{
			cout<<"\n Enter the First Number:";
			cin>>a;
		}
		void display()
		{
			cout<<"\n Number is:"<<a;
		}
	
};
class Addition:public Mathematical
{
	int b,add=0;
	public:
		void getdata1()
		{
			cout<<"\n Enter the second Number:";
			cin>>b;
		}
		void display1()
		{
			cout<<"\n Number is:"<<b;
			
			add=a+b;
			cout<<"\n Addition is:"<<add;
			
		}
		
		
};

class Subtraction:public Mathematical
{
		int c,sub=0;
	public:
		void getdata2()
		{
			cout<<"\n Enter the second Number:";
			cin>>c;
		}
		void display2()
		{
			cout<<"\n Number is:"<<c;
			
			sub=a-c;
			cout<<"\n Substraction is:"<<sub;
			
		}
};
int main()
{
	cout<<"\n Addition is:";
	
	Addition A;
	A.getdata();
	A.display();
	A.getdata1();
	A.display1();
	
	cout<<"\n Substraction is:";
	Subtraction S;
	S.getdata();
	S.display();
	S.getdata2();
	S.display2();
	return 0;
}


