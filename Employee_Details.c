#include<stdio.h>
#include<conio.h>

// creating structure employee which contains no, name, departmentname, salary
struct employee{
	int empno;
	char empname[10];
	char departmentname[5];
	int salary;
};

void main(){
	
	struct employee E[20]; // creating structure object
	int i,n,num=1;
	top: // initialising top caz if condition fails it leads us to que again for number of employee details 
	
	printf("Enter number of employee details you want to enter(upto 20) : ");
	scanf("%d",&n);
	
	if(n<=20)
	{
		for(i=1;i<=n;i++)
		{
			printf("\nEnter Employee %d Details : \n",num);
			printf("No : ");
			scanf("%d",&E[i].empno);
			printf("Name : ");
			scanf("%s",&E[i].empname);
			printf("DepartmentName : ");
			scanf("%s",&E[i].departmentname);
			printf("Salary : ");
			scanf("%d",&E[i].salary);
			num = num + 1;
		}	
		printf("\n\nGiven details are : \n\n");
		printf("EmpNo \tEmpName \tDepartmentName \tSalary\n");
		for(i=1;i<=n;i++)
		{
			printf("%d \t%s \t\t%s \t\t%d",E[i].empno,E[i].empname,E[i].departmentname,E[i].salary);
			printf("\n");
		}
	}
	else
	{
		printf("Enter suitable number as suggest!!!\n\n");
		goto top; // by using goto we will back again to que
	}
}
