#include <stdio.h>
#include <conio.h>
void main () 
{
	int i,stock[5];
    float price[5];
	 float total=0;
	for(i=0;i<5;i++)
	{
	printf("enter stock of bulb %d:",i+1);
	scanf("%d",&stock[i]);
		printf("enter price of bulb %d:",i+1);
		scanf("%f", &price[i]);
		total=total+stock[i]*price[i];
	}
	
	printf("the total stock value is  %f\n",total);
	getch ();
	
}
