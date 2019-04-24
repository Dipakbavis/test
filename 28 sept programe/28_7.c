#include<stdio.h> 
int main()
{
	char c;
	    FILE *fptr; 
	     fptr=fopen("D:\\emp.txt", "a");
	     if(fptr==NULL)
	     {
	     	printf("\n Error:");
	     	    
		 }
		 c=fgetc(fptr);
		 while(c!=EOF)
		 {
		 	printf("\n %c",c);
		 	c=fgetc(fptr);
		 }
		 
		 
		 
		  fclose(fptr);
	     return 0;
}
