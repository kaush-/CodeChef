#include<stdio.h>

int main(void)
{
	int f,r;
	unsigned long long n,k,t[100][2];
	
	scanf("%d",&f);
	
	for(r=0;r<f;r++)
	{
	
		scanf(" %llu%llu",&n,&k);
		
		if(n==0 || k==0)
		{
			t[r][0]=0;
			t[r][1]=n;
		}
		
		else
		{
			t[r][0]=n/k;
			t[r][1]=n%k;
		}
	}
	
	for(r=0;r<f;r++)
		printf("%llu %llu\n",t[r][0],t[r][1]);
		
	return 0;
	
}
