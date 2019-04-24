#include<stdio.h> 
int add(int a,int b)
{
	int c;
	c=a+b;
	printf("\n Addition of this number:%d",c);
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	printf("\n Substraction of this number:%d",c);
}
int mul(int a,int b)
{
	int c;
	c=a*b;
	printf("\n Multiplication of this number:%d",c);
}
int div(int a,int b)
{
	int c;
	c=a/b;
	printf("\n Division of this number:%d",c);
}
int main()
{
	add(10,20);
	sub(10,20);
	mul(10,20);
	div(10,20);
	return 0;
}
