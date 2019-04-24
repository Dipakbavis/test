#include<stdio.h>  
#include <string.h>    
union student
{    
    int rollno;    
    char name[10];    
};    
int main()
{    
    int i;    
    union student st[5];    
    printf("Enter Records of 5 students");    
    	for(i=0;i<5;i++)
		{    
    		printf("\nEnter Rollno:");    
    		scanf("%d",&st[i].rollno);    
    		printf("\nEnter Name:");    
    		scanf("%s",&st[i].name);    
    	}    
    		printf("\n**Student Information List:**");    
    	for(i=0;i<5;i++)
		{    
    		printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);    
    	}    
       		return 0;    
}    
