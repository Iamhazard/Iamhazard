/* program to read two M*N matrices*/
#include<stdio.h>
#define M 3
#define N 3
int main()
{
	int matrix1[M][N],matrix2[M][N],sum[M][N],i,j;
	printf("\n Enter the elements of first matrix:\t  ");
	for(i=0;j<M;i++)
    {
	for(j=0;j<N;j++)
	{
		scanf("%d", &matrix1[i][j]);		
	}	
}
printf("\n The first matrix is :\n");
for(i=0;i<M;i++)
{
	for(j=0;j<N;j++)
	{
		printf("%d\t",matrix1[i][j]);
		
	}
	printf("\n");
	
}
printf("\n Enter the element of second matrix:\t");
for(i=0;i<M;i++)
{
	for(j=0;j<N;j++)
	{
		scanf("%d",&matrix2[i][j]);
	}
}
printf("\n the second matrix is :\n");
for(i=0;i<M;i++)
{
	for (j=0;j<N;j++)
	{
		printf("%d\t",matrix2[i][j]);
		
	}
	printf("\n");
	}
	for (i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
		}
		
	}
	printf("\n the sum of the matrices is:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\t%d",sum[i][j]);
			
		}
		printf("\n");
		
	}
return 0;
}
