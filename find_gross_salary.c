
#include<stdio.h>

void main()
{
 	 //Write C Program to find gross salary.(Gross Salary=Base Salary+HRA+DA+TA)
     //Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
   	 //Ans = 123 RS
   	 
	float base_salary;
	printf("Enter Your Base Salary :");
	scanf("%f",&base_salary);
	
	float hra = (base_salary*10)/100;
	float da = (base_salary*5)/100;
	float ta = (base_salary*8)/100;
	
	float gross_salary = base_salary + hra + da + ta;
	
	printf("Gross Salary :RS.%.2f",gross_salary);
	
}
