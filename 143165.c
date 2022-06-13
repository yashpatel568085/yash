0#include<stdio.h>
#include<conio.h>
int main()
{
int a,n;
printf("enter n:");
scanf("%d",&n);
for(a=0;a<=n;a++)
{
	if(a%2==0)
		{
		printf("\t %d",a*a);
		}
	else
		{
		printf("\t %d",a);
		}
}
return 0;
}
