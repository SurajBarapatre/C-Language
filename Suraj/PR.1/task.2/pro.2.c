
#include<stdio.h>

void main()
{
 	 //Write C Program to find gross salary.(Gross Salary=Base Salary+HRA+DA+TA)
     //Base Salary: 100 RS/-, HRA=10%, DA=5%, TA=8%.
     //Ans = 123 RS/-
   	 
	float base_salary;
	printf("Enter Your Base Salary :"); // for display base salary
	scanf("%f",&base_salary);
	
	float hra = (base_salary*10)/100;  // for hra add into base salary
	float da = (base_salary*5)/100;    // for da add into base salary
	float ta = (base_salary*8)/100;    // for ta add into base salary
	
	float gross_salary = base_salary + hra + da + ta; // for find to gross salary
	
	printf("Gross Salary : RS/-%.2f",gross_salary);
	
}

