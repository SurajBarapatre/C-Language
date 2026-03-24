#include<stdio.h>

void main()
{	       
     // extend the program to count the frequency of each charactor in a given string 
	
	char name [20];
	int i,j; 
	 
	 printf("Enter any string : ");
	 gets(name);
	 
	 int n = strlen (name);
	 
	 printf("\n");
	 
	 printf("Frequency of each letter name -> %s\n",name);
	 
	 printf("\n");
	 
	 for(i=0; i<n; i++) 
	 {
	 	int count = 1;   
	 	
	if(name[i]!=NULL) 
	{
		 
	 	for(j=i+1; j<n; j++)
	 	{
	 		if(name[i]==name[j]) 
	 		{
	 		  count++;	        
	 		  name[j]=NULL;
			}
		 }
    
		 printf("%c -> %d\n",name[i],count);
    }
	 }
	 
	 
}

