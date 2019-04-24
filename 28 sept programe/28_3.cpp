#include<iostream>
using namespace std;
int main()
{
	int a,i,d,c,sum=0;
	cout<<"\n Enter the armstrong number:";
	cin>>a;
	d=a;
	do
	{
		c=a%10;
		a=a/10;
		sum=sum+c;
	}while(a!=0);
	
	cout<<"\n Armstrong Addition:"<<d<<"is"<<sum;
	return 0;
}
