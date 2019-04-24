/*Perform Arithmatic operation using Switch Case then perform 1.Palindrome 2.Prime Number 3.Armstrong Number*/


#include<iostream>
using namespace std;
int main()
{
	int a,b,c,ch,rev=0,rem,n,i,count,d,fact=1;
	cout<<"\n Enter first number:";
	cin>>a;
	cout<<"\n Enter second number:";
	cin>>b;

	do
	{
		cout<<"\n1. Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5. Exit";
		cout<<"\n Enter urs choice:";
	    cin>>ch;
		switch(ch)
		{
			case 1:
					c=a+b;
					cout<<"\n Addition is:"<<c;
					n=c;
					/*do
					{
						rem=c%10;
						rev=rev*10+rem;
						c=c/10;	
					}while(n!=0);
						cout<<"\n reverse of addition is:"<<rev;
						
					if(n==rev)
					{
						cout<<"\n palindrome";
					}
					else
					{
						cout<<"\n not palindrome";
					}	
					*/
					while(c>0)
					{
							rem=c%10;
						    rev=rev*10+rem;
							c=c/10;	
					}
					if(rev==n)
					{
						cout<<"\n palindrome";
					}
					else
					{
						cout<<"\n not palindrome";
					}
					break;
			case 2:
					c=a-b;
					cout<<"\n Subtraction is:"<<c;
					for(i=1;i<=c;i++)
					{
						if(c%i==0)
						{
							count++;
						}
					}
					if(count==2)
					{
						cout<<"\n The number is prime:"; 
					}
					else
					{
						cout<<"\n The number is not prime:";
					}
					
					break;
			case 3:
					c=a*b;
					cout<<"\n Multiplication is:"<<c;
					d=c;
					for(i=1;i<=d;i++)
					{
						fact=fact*i;
					}
					cout<<"\n Factorial of:"<<d<<"is"<<fact;
					break;
			case 4:
					c=a/b;
					cout<<"\n Division is:"<<c;
					while(c>0)
					{
							rem=c%10;
						    rev=rev+(rem*rem*rem);
							c=c/10;	
					}
					if(n==rev)
					{
						cout<<"\n Armstrong";
					}
					else
					{
						cout<<"\n not Armstrong";
					}
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
