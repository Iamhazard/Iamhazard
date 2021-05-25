#include<stdio.h>
void sum(int ,int);
int main()
{
	int a,b;
	printf("\n Enter two number:");
	scanf("%d%d",&a,&b);
	sum(a,b);
	printf("\n it is a function with argument and no return value:");
	return 0;
	
}
void sum (int a, int b)
{
	int s;
	s=a+b;
	printf("\n the sum is %d",s);
	
}
