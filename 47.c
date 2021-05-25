#include <stdio.h>
#include<conio.h>
int main()
{
	int x=10;
	int*p;
	int **q;
	int***r;
	p=&x;
	q=&p;
	r=&q;
	printf("\n Value of x=%d",x);
	printf("\n value of x=%d",*p);
	printf("\n value of x=%d",**q);
	printf("\n value of x=%d",***r);
	return 0;
	
}
