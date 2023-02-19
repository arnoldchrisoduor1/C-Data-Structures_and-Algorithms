#include <stdio.h>

struct employee
{
	char name[9];
	char position[9];
	int age;
	int salary;
};

int head()
{
	struct employee head;
	
		head.age = 19;
		head.salary = 300000;
}

int main()
{
	struct employee emp1;

	puts("Please give the age of the employee 1:");
	scanf("%d",&emp1.age);
	puts("Give employee name:");
	scanf("%s",&emp1.name);
	

	printf("\nAge of emp1:%d",emp1.age);
	printf("\nName of emp1:%s",emp1.name);

	return 0;
}

