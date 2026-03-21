#include<stdio.h>
#include<string.h>

void main()
{
	// wap to check string is paliadrom is not
	// paliadrom string after reverse, same of before
	
	char name[50], rev[50];
	int length=0, i,j,check=0;
	
	printf("Enter the String : ");
	gets(name);
	
	// suraj
	// finding length
	
	while(name[length!=NULL])
	{
		length++;
	}
	
	printf("\nLength of string is %d\n\n",length);
	
	// name    s u r a j
	//         0 1 2 3 4
	
	// rev     j a r u s
	//         0 1 2 3 4
	
	j=length-1;        
	
	for(i=0; i<length; i++)
	{
		rev[i] = name[j];       
	}
	
	printf("\nReversed string is %s\n\n ",rev);
	
	for(i=0; i<length; i++)
	{
		if(name[i]!=rev[j])
		{
			check=1;
			break;
		}
	}
	if(check==0)
	{
		printf("\nString is paliadrom ! ");
	}
	else
	{
		printf("\nString is not paliadrom !");
	}
	printf("\n");
	
	char temp[50];
	
	printf("Enter a String : ");
	gets(name);
	
	strcpy(temp,name);
	strrev(name);
	
	int res = strcmp(name,temp);
	
	if(res==0)
	{
		printf("String is paliadrom !");
	}
	else
	{
		printf("String is not paliadrom !");
	}
}

