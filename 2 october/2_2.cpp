#include<iostream>
using namespace std;
int main()
{

	
	
	int *a,*b,*temp;
	
	
	cout<<"\n Enter value of a and b:";
	cin>>*a>>*b;
	
	cout<<"\n Before swap: *a="<<*a<<" *b="<<*b;
	
	*temp=*a;
	*a=*b;
	*b=*temp;

	cout<<"\n After swap: *a="<<*a<<" *b="<<*b;
	return 0;
	
}
