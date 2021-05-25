 //array 1-d//
 #include<stdio.h>
#include<Conio.h>
void main(){
	
	int i;
	int marks[10];
	printf("enter marks of 10 subjects:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&marks[i]);
		
	}
	printf("\n the entered number are:\n");
	for(i=0;i<10;i++)
	{
	printf("\n marks [%d]= %d",i,marks[i]);
		
	}
	getch();
	
}
