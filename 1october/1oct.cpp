/********Single Inheritance*********/

#include<iostream>
using namespace std;
class student
{
	int roll_no;
	char name[20];
	public:
		void insert()
		{
			cout<<"\n Enter ur Roll_no And Name:";
			cin>>roll_no>>name;
		}
		void display()
		{
			cout<<"roll_no="<<roll_no;
			cout<<"name="<<name;
		}
};

	
class marks:public student
{
	int m1,m2,m3;
	public:
		void insert1()
		{
			cout<<"\n Enter urs marks:";
			cin>>m1>>m2>>m3;
			
		}
		void display1()
		{
			cout<<"\n marks m1:"<<m1<<"marks m2:"<<m2<<"marks m3:"<<m3;
		}
};
int main()
{
	marks st;
	st.insert();
	st.display();
	st.insert1();
	st.display1();
	return 0;
}
