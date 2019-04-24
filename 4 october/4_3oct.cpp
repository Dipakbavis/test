/*Take number check wheather Armstrong or not,if it is Armstrong then convert 
	to pointer*/

#include<iostream>
using namespace std;
int main()
{
		int n,r,sum=0,temp;    
		cout<<"Enter the Number: ";    
		cin>>n;    
		temp=n;    
		while(n>0)    
		{    
				r=n%10;    
				sum=sum+(r*r*r);    
				n=n/10;    
		}    
		if(temp==sum) 
		{
		    
			cout<<"Armstrong Number:";
			
			int *ptr;
			ptr=&temp;
			cout<<"\n pointer is:"<<*ptr;
		
		}
		else  
		{
		   
			cout<<"Not Armstrong Number:";
		}
	
		
		
		return 0;  
		
}
