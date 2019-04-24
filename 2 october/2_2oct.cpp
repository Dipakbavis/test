#include<iostream>
using namespace std;
int main()
{
		int a=20,b=10,*p1=&a,*p2=&b;  
	  
			 cout<<"\n Before swap: *p1="<<*p1<<" *p2="<<*p2;

			 *p1=*p1+*p2;   
			 
			 *p2=*p1-*p2;  
			  
			 *p1=*p1-*p2; 
			   
			 cout<<"\n After swap: *p1="<<*p1<<" *p2="<<*p2;
			   
  			 return 0; 
}
