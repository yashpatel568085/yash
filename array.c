#include<stdio.h>
int main()
{
	int a[5],b[5],i,j,z;
	for(i=0,j=0;i<5,j<5;i++,j++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		printf("\tenter b[%d]:",i);
		scanf("%d",&b[i]);		
	}
	for(i=0,j=0;i<5,j<5;i++,j++)
	{
		z=a[i]+b[i];
		printf("\n a[%d]:%d \t b[%d]:%d",i,a[i],i,b[i]);
		printf("\t total : %d",z);
	}
}