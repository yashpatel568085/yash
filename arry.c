#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{	
		if(a[i]%2!=0)
		{
		sum=sum+a[i];	
		printf("\n a[%d]:%d",i,a[i]);
		}
	}
	
printf("\n total:%d",sum);
return 0;
}
