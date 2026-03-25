#include<stdio.h>

void main()
{	       
     // extend the program to count the frequency of each charactor in a given string 
	
	char name [20];                                                                    // for get string by user
	int i,j; 
	 
	 printf("Enter any string : ");                                               // for printing string by user
	 gets(name);
	 
	 int n = strlen (name);                                                       // for finding length of string name by user
	
	 printf("\n");
	 
	 printf("Frequency of each letter name -> %s\n",name);                       // for printing frequaency by each letter by user name
	 
	 printf("\n");
	 
	 for(i=0; i<n; i++)                                                        // for count in each letter by user
	 {
	 	int count = 1;   
	 	
	if(name[i]!=NULL)                                                          // for not count similar letter by user string name
	{
		 
	 	for(j=i+1; j<n; j++)                                                  // for count each letter by user string name
	 	{
	 		if(name[i]==name[j]) 
	 		{
	 		  count++;	        
	 		  name[j]=NULL;
			}
		 }
    
		 printf("%c -> %d\n",name[i],count);                               // for display freuquancy each letter by user string name
    }
	 }
	 
	 
}

