#include<iostream>
using namespace std;
int main()
{
	int a=12,c,ch;
	int *ptr;
	ptr=&a;
	cout << "ptr : " << *ptr;
	  
	int b=12;
	int *ptr1;
	ptr1=&b;
	cout << "ptr : " << *ptr1;
	
	do
	{
		cout<<"\n1. Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5. Exit";
		cout<<"\n Enter urs choice:";
	    cin>>ch;
		switch(ch)
		{
			case 1:
					c=*ptr+*ptr1;
					cout<<"\n Addition is:"<<c;
				
				
				
					break;
			case 2:
					c=*ptr-*ptr1;
					cout<<"\n Subtraction is:"<<c;
					
					break;
			case 3:
					c=*ptr * *ptr1;
					cout<<"\n Multiplication is:"<<c;
					break;
			case 4:
					c=*ptr / *ptr1;
					cout<<"\n Division is:"<<c;
				
					break;
			case 5:
					return 0;
					break;
			default:cout<<"\n Wrong choice:";
					break;		
													
					
		}
	}while(ch<=5);
	
	return 0;
	
	  
	
	
}
