#include<stdio.h>
#include<conio.h>
#include<string.h>
#define N 10
int main()
{
	char names [N][20],temp[20];
	int i,j;
	printf("Enter name list of 10 students:\n");
	for(i=0;i<N;i++)
	gets(names[i]);
	for(i=0;i<N-1;i++)
	   for(j=0;j<N-1;j++)
		 if (strcmp(names[j],names[j+1])>0)
		 {
		 	strcpy(temp,names[j]);
		 	strcpy(names[j],names[j+1]);
		 	strcpy(names[j+1],temp);
		 	
		 }

  printf("sorted list is :\n");
  for(i=0;i<N;i++)
  printf("%s\n",names[i]);
  ;
}
