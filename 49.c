#include<stdio.h>
#include<string.h>
int main (void )
{
	char *namaste ="NAMASKAR SIR";
	char name [40];
	printf("Enter your name :");
	gets(name);
	puts(namaste);
	printf("\n Namaskar %s sir",name);
	return 0;
}
