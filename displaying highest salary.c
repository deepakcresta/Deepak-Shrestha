#include<stdio.h>
#include<conio.h>
#include<string.h>

	struct employee
	{
		char empName[60];
		char empID [20];
		float empSalary;
	};
	main()
	{
	struct employee emp[5];
	int i;
	float large,index=0;
	printf("Enter the Employees Information");
	printf("\n--------------------------------");
	for(i=0;i<5;i++)
	{
		 fflush(stdin);
		printf("\n Name:");
		gets(emp[i].empName);
		printf(" \n ID:");
		scanf("%s",emp[i].empID);
		printf("\n Salary:");
		scanf("%f",emp[i].empSalary);
	
	}
	large=emp[0].empSalary;
	index=0;
	for(i=0;i<5;i++)
	{
	if(emp[i].empSalary>large)
	{
		large=emp[i].empSalary;
		index=i;
	}
	}
	printf("Displaying Highest Salary");
	printf("\n ------------------------");
	for(i=0;i<5;i++)
	{
	printf("Name:%s",emp[i].empName);
	printf("Emp ID:%S",emp[i].empID);
	printf("Salary:%f",emp[i].empSalary);
	}
	getch();
}
