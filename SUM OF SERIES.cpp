#include<stdio.h>
int main()
{
	int i,j,n,s,term;
	printf("enter the of n:");
	scanf("%d",&n);
	s=0;
	for(i=0;i<=n;i++)
	{
		term=0;
		for(j=0;j<=i;j++)
		{
			term=term+j;
		}
		s=s+term;
	}
	printf("sum of the series s=%d",s);
	return 0;
}
