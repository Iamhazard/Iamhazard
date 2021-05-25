// program to find transpose of matrix//
#include<stdio.h>
#define M 3
#define N 3
int main ()
{
int matrix[M][N],transpose [N][M],i,j;
printf("\n Enter the element of matrix:\t");
for (i=0;i<M;i++)
{
	for (j=0;j<N;j++)
	{
		scanf("%d",&matrix[i][j]);
		
	}
}
printf("The matrix to be transposed is :\n");
for (i=0;i<M;i++)
{
	for(j=0;j<N;j++)
	{
		printf("%d\t",matrix[i][j]);
		
	}
	printf("\n");
	
}
for (i=0;i<M;i++)
{
	for (j=0;j<M;j++)
	{
		transpose[j][i]=matrix[i][j];
	}
}
printf("\n the transpose matrix is :\n");
for(i=0;i<M;i++)
{
	for (j=0;j<N;j++)
	{
		printf("%d\t",transpose[i][j]);
	}
	printf("\n");
	
}
return 0;
}
