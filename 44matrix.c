#include<stdio.h>
#define ROW 4
#define COL 4
int main ()
{
	int a[ROW][COL],i,j,sum;
	printf("Enter element of matrix :\n");
	for(i=0;i<ROW;i++)
	{
		for (j=0;j<COL;j++)
		scanf("%d",&a[i][j]);
		printf("\n");
		
	}
	for(i=0;i<ROW;i++)
	{

	sum=0;
	for (j=0;j<COL;j++)
	sum=sum+a[i][j];
	printf("sum of row %d=%d\n",i+1,sum);
}
return 0;
}


