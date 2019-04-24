#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,sum1,sum2,sum3,sum4,total[2][2],sum=0,digit,rev,rem,n;
	cout<<"\n Enter the first array:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<a[i][j];
		}
	}
		cout<<"\n Enter the second array:";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<b[i][j];
		}
	}
	cout<<"\n Addition ";
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j];
			
			sum1=c[i][j];
			cout<<sum1<<"\n";	
		
		}	
	}

	
	
	cout<<"\n Subtraction ";
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			cout<<"\t"<<c[i][j];
			
		
			sum2=c[i][j];
			cout<<sum2<<"\n";
		}
	}
	
	
	
	cout<<"\n Multiplication ";
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			
		}
	}
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}

	   }
	}
		for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			cout<<"\t"<<c[i][j];
			
			sum3=c[i][j];
			
			cout<<sum3<<"\n";
			
		}
	}
	
	
	
	cout<<"\n Division ";
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]/b[i][j];
			cout<<"\t"<<c[i][j];
			
			sum4=c[i][j];
			cout<<sum4<<"\n";
		}
	}

	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			total[i][j]=sum1+sum2+sum3+sum4;
			cout<<total[i][j];
			
			sum=sum+total[i][j];
		}
	}
	
	
     	cout<<"\n Sum is:";
		cout<<sum;
	
	
	 	int *ptr;
	 	ptr=&sum; 
	 	cout<<"\n ptr:"<<*ptr;
	
		while(sum>0)
		{
			rem=sum%10;
			rev=rev*10+rem;
			sum=sum/10;	
		}
		if(rev==n)
		{
			cout<<"\n palindrome";
		}
		else
		{
			cout<<"\n not palindrome";
		}
	
	
	
	return 0;
}
