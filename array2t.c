#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)	
		{
		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("\n matrix a\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
	printf("\n");
	}
	sum=0;
	for(j=0;j<3;j++)
	
			{
				sum=sum+a[j][j];	
			}

	printf("\n upper trtiangle matrix total is:%d",sum);	
}




