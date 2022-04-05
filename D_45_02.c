#include <stdio.h>

int main()
{
    int n,i,t=9;
	int sum =0;
	printf("Input the number or terms :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{ sum +=t;
	  printf("%d +  ",t);
	  t=t*10+9;
	}
	printf("\nThe sum of the series = %d \n",sum);
}