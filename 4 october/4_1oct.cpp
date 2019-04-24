/* Take two string find the length of those string then perform addition between 
	string length,output declare as pointer and find factorial*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[10] = "Hello"; 
	char s2[10] = "World"; 
	
	int sum=0,fact,i,d;
	
	cout<<"\n Length of the first string:"<<strlen(s1); 
    cout<<"\n Length of the second string:"<<strlen(s2); 
    
    sum=strlen(s1)+strlen(s2);
    cout<<"\n Addition of string is:"<<sum;
    
    int *ptr;
    ptr=&sum;
    cout<<"\n pointer is:"<<*ptr;

	for(i=1;i<=sum;i++)
	{
		fact=fact*i;
	}
		cout<<"\n Factorial of:"<<sum<<"is"<<fact;
    
    return 0;
    
}
