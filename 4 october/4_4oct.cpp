/* Accept two string and perform division between them
	and compare those string*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	
	char s1[10] = "Hello"; 
	char s2[10] = "World"; 
	
	float div=0;
	
	cout<<"\n Length of the first string:"<<strlen(s1); 
    cout<<"\n Length of the second string:"<<strlen(s2); 
    
    div=strlen(s1)/strlen(s2);
    cout<<"\n Division of string is:"<<div;
    
    if(strlen(s1)==(strlen(s2)))
    {
    	cout<<"\n String are equals:";
	}
	else if(strlen(s1)>(strlen(s2)))
	{
			cout<<"\n String s1 is greater:";
	}
	else
	{
		cout<<"\n String s2 is greater:";
	}
    return 0;
    
}
    
