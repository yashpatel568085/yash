#include<stdio.h>
int main()
{
	int rollno[5],m1[5],m2[5],m3[5],total[5],per[5],i;
	for(i=0;i<5;i++)
	{
	printf("enter m1[%d]:",i);
	scanf("%d",&m1[i]);
	printf("enter m2[%d]:",i);
	scanf("%d",&m2[i]);
	printf("enter m3[%d]:",i);
	scanf("\t %d",&m3[i]);
	}
	for(i=0;i<5;i++)
	{
	total[i]=m1[i]+m2[i]+m3[i];
	printf("%d",total[i]);
	}
}
