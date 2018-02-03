#include<stdio.h>
#include<stdlib.h>

unsigned long long fact(int a)
{
	if(a==0 || a==1)
	return 1;
	
	return(a*fact(a-1));
}

int main(void)
{
	int *t,tc,i;
	
	scanf("%d",&tc);
	
	t=(int *)malloc(sizeof(int)*tc);
		
	for(i=0;i<tc;i++)
		scanf(" %d",&t[i]);
	
	for(i=0;i<tc;i++)
		printf("%llu\n",fact(t[i]));
	
	return 0;
	
}
