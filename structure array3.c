//create a structure named student that have marks and remark as it member use this to read and display the record of 10 student.
#include<stdio.h>
#include<conio.h>
struct student
{
	char name [30];
	int roll;
	float marks;
	char remarks;
};
int main ()
{
	struct student s[15];
	int i;
	float temp;
	for(i=0;i<10;i++)
	
	{
		Printf("\n Enter information about student%d",i+1);
		printf("\n name:\t");
		scanf("%s",s[i].name);
		printf("\n roll:\t");
		scanf("%d",&s[i].roll);
		printf("\n marks:\t");
		scanf("%f",&s[i].marks);
		printf("\n remarks:\t");
		scanf("%c",s[i].remarks);
		s[i].remarks=getche();
	}
	printf("\n");
	printf("\n student name\t Roll\t marks\t\t remarks");
	for(i=0;i<10;i++);
	
{

	printf("%s\t %d\t %f\t %c\t",s[i].name,s[i].roll,s[i].marks,s[i].remarks);
}
return 0;
}


