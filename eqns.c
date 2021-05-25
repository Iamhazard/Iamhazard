 #include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,root1,root2,real,img;
	printf("\n Enter values of a,b and c of the quadratic equation:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("\n Imaginary Roots.");
		d=sqrt(fabs(d));
		real=-b/(2*a);
		img=d/(2*a);
		printf("\n Root1=%.2f+i %.2f",real,img);
		printf("\n Root2=%.2f-i %.2f",real,img);
	}
	else
	{
		printf("\n Roots are real.");
		d=sqrt(d);
		root1=(-b+d)/(2*a);
		root2=(-b-d)/(2*a);
		printf("\n Root1= %.2f\t Root2=%.2f",root1,root2);
		
	}
	getch();
	
	
}
