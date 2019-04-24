/****** Using Multidimensional array Perform Arithamatic operation ******/

#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
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
			cout<<"\t"<<c[i][j];
			sum=sum+c[i][j];
			
		}
	}
	cout<<"\n Addtion of MAtrix is:"<<sum;
	if(sum%2==0)
	{
		cout<<"\n Even";
	}
	else
	{
		cout<<"\n odd";
	}
	
	cout<<"\n Subtraction ";
	for(i=0;i<2;i++)
	{
		cout<<"\n";
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			cout<<"\t"<<c[i][j];
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
		}
	}
	

}
