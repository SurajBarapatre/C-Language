#include<stdio.h>

void main()
{
	// Devlop a program thats check whether a given string is a pelindrom or not without using string function
	       
	   char name[50];
	   char reverse [50];
	   int i,j,check=0,length=0;                          // for input of string      
	   
	   printf("Enter any string : ");                     // for display string by user
	   gets(name);
	   
	  while(name[length]!=NULL)                           // for finding length name of string
	  {
	  	length++;
	  }
	  
	  printf("\nlength of string : %d\n",length);
	  
	  j=length-1;                                        // for decrement in variable j              
	  
	  for(i=0; i<length; i++)                          // for finding revense name of string
	  {
	  	reverse[i] = name[j];       // 
	  	j--;                    // 
	  }
	     printf("\n Reverse string is %s",reverse);    // display reverse name of string
	     
	     printf("\n");
	     
	     for(i=0; i<length; i++)                      // for check to string name is paliadrom or not
	     {
	     	if (name[i]!= reverse[i])  
	     	{
	     		check=1;
	     		break;                               
			 }
		 }
		 if(check==0)                                               // for display string name by user
		 {
		 	printf("\nthe given string is a Palindrome !");        
		 }
		 else
		 {
        	printf("\nthe given string is not Palindrome !");		 
		}
}

