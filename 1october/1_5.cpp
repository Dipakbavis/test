/************ Hybrid Inheritance*****************/

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

class hobbi
{
	char h_Name[30];
	public:
		void insert2()
		{
			cout<<"\n Enter ur Hobbi name:";
			cin>>h_Name;
		}
		void display2()
		{
			cout<<"\n Hobbi Name="<<h_Name;
		}
};
class BloodGrp:public marks,public hobbi
{
	
	char B_Name[10];
	public:
		void insert3()
		{
			cout<<"\n Enter Blood Group name:";
			cin>>B_Name;
		}
		void display3()
		{
			cout<<"\n  Blood Group Name="<<B_Name;
		}
};

int main()
{
	BloodGrp B;
	B.insert();
	B.display();
	B.insert1();
	B.display1();
	B.insert2();
	B.display2();
	B.insert3();
	B.display3();
	return 0;
}
