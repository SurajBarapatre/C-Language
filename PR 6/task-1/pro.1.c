#include<stdio.h>

void main()
{
	// Devlop a program thats check whether a given string is a pelindrom or not without using string function
	       
	   char name[50];
	   char reverse [50];
	   int i,j,check=0,length=0;             
	   
	   printf("Enter any string : ");
	   gets(name);
	   
	  while(name[length]!=NULL)
	  {
	  	length++;
	  }
	  
	  printf("\nlength of string : %d\n",length);
	  
	  j=length-1;              //
	  
	  for(i=0; i<length; i++)  // 
	  {
	  	reverse[i] = name[j];       // 
	  	j--;                    // 
	  }
	     printf("\n Reverse string is %s",reverse);  
	     
	     printf("\n");
	     
	     for(i=0; i<length; i++)
	     {
	     	if (name[i]!= reverse[i])  //
	     	{
	     		check=1;
	     		break; 
			 }
		 }
		 if(check==0)
		 {
		 	printf("\nthe given string is a Palindrome !");
		 }
		 else
		 {
        	printf("\nthe given string is not Palindrome !");		 
		}
}

