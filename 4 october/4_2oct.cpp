/* Accept 3D Array perform addition in it and find factorial and
	declare that factorial value to pointer*/

#include<iostream>
using namespace std;
int main()
{
	
	int a[3][3][1],b[3][3][1],c[3][3][1],i,j,k,sum1=0,fact;
	cout<<"\n Enter the first array:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<1;k++)
			{
		
					cin>>a[i][j][k];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
				for(k=0;k<1;k++)
				{
			
					cout<<"\t"<<a[i][j][k];
				}
		}
		
	}
	cout<<"\n Enter the second array:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
				for(k=0;k<1;k++)
				{
			
						cin>>b[i][j][k];
				}
		}
		
	}
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			for(k=0;k<1;k++)
			{
			
				cout<<"\t"<<b[i][j][k];
			}
		}
}
	cout<<"\n *******Addition is**********";
	for(i=0;i<3;i++)
	{
		cout<<"\n";
		for(j=0;j<3;j++)
		{
			for(k=0;k<1;k++)
			{
			
			c[i][j][k]=a[i][j][k]+b[i][j][k];
			cout<<"\t"<<c[i][j][k];
			
			sum1=sum1+c[i][j][k];
			
		
			}	
		}
	}
		cout<<"\n Addition is:"<<sum1<<"\n";
		
	

	for(i=1;i<=sum1;i++)
	{
		fact=fact*i;
	}
		cout<<"\n Factorial of:"<<sum1<<"is"<<fact;
		
	int *ptr;
    ptr=&fact;
    cout<<"\n pointer is:"<<*ptr;
    
return 0;
}
