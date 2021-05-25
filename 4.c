// to find smallest &largest number in array//
#include<stdio.h>
void main()
{

int i,n;
int small,large ,a[50];
printf("Enter value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\n enter the %d th element of an array:",i+1);
	scanf("%d",&a[i]);	
}
printf("\n the elements of an array are:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
small=a[0];
large=a[0];
for(i=1;i<n;i++)
{
	if(small>a[i])
	small=a[i];
	if(large<a[i])
	large=a[i];
}
printf("\nthe samllest element =%d and the largest element=%d",small,large);

}
