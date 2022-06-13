#include<stdio.h>
int main()
{
int i=1,j=1,n;
printf("enter n:");
scanf("%d",&n);
do
{
printf("\t %d",i*j);
(i*=2)*i,j++;
}while(i<=n,j<=n);
return 0;
}
