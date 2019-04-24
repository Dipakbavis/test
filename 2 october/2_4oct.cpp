#include<iostream>
using namespace std;
int main()
{
	int a=24;
	int *ptr;
	ptr=&a;
	cout << "ptr : " << *ptr;
	  
	int b=12;
	int *ptr1;
	ptr1=&b;
	cout << "ptr : " << *ptr1;
	
	if(*ptr>*ptr1)
	{
		cout<<"\n ptr is greater";
	}
	else
	{
		cout<<"\n ptr1 is greater";
	}
	return 0;
}

