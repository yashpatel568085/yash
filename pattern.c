#include<stdio.h>
int main()
{
int i,j,n=1,sp=10;
for(i=1;i<=5;i++)
	{
	for(j=1;j<=sp;j++)
	printf(" ");
			for(j=1;j<=i;j++)
			{
				printf(" *");
			}
				printf("\n");
				sp--;
		}
	return 0;
}       



           *
          * *
         * * *
        * * * *
       * * * * *