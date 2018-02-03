#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *i,n;
	scanf("%d",&n);
	i=(int *)malloc(sizeof(int)*n);
	int j;
	
	for(j=0;j<n;j++)
	scanf("%d",&i[j]);
	
	for(j=0;j<n;j++)
	{
		int mod=5;
		int count=0;
	
		while(mod<=i[j])
		{
			count=count+i[j]/mod;
			mod=mod*5;
		}
		printf("%d\n",count);
	}
	return 0;
	
}
