/************ Hierachical Inheritance******************/


#include<iostream>
using namespace std;
class person
{
	char name[20];
	char address[20];
	public:
		void insert()
		{
			cout<<"\n Enter urs Name And Address:";
			cin>>name>>address;
		}
		void display()
		{
			cout<<"\n Name:"<<name;
				cout<<"\n Address:"<<address;
		}
};
class student:public person
{
	int roll_no;
	char name[20];
	public:
		void insert1()
		{
			cout<<"\n Enter ur Roll_no And Name:";
			cin>>roll_no>>name;
		}
		void display1()
		{
			cout<<"\n Roll_no="<<roll_no;
			cout<<"\n Name="<<name;
		}
};
class employe:public person
{
	int salery;
	int id;
	public:
			void insert2()
			{
				cout<<"\n Enter ur Salery And Id:";
			     cin>>salery>>id;
			}
			void display2()
			{
				cout<<"\n Salery="<<salery;
				cout<<"\n Id="<<id;
			}
		
};
int main()
{
	
		cout<<"\n Enter Employe Details: ";
		employe e;
		e.insert();
		e.display();
		e.insert2();
		e.display2();
		
	
		cout<<"\n Enter Student Details: ";
		student s;
		s.insert();
		s.display();
		s.insert1();
		s.display1();
		
		return 0;
}
