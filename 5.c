//1D array in ascending order//
#include<stdio.h>
void main()
{	int nums[100],i,j,n,temp;
	printf("\n How many numbers you want to sort?:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&nums[i]);
	printf("\n the number before sorting are:\n");
	for (i=0;i<n;i++)
	printf("%d\t",nums[i]);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if (nums[i]>nums[j])
			{
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
		}
	}
	printf("\n the number in ascending order are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",nums[i]);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if (nums[i]>nums[j])
			{
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
			}
		}
	}
	
	
	printf("\n the number in descending order are:\n");
	for(i=0;i<n;i++)
	print("%d\t",nums[i]);
	getch();
	}

