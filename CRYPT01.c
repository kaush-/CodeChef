#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int T,k;
	scanf(" %d",&T);
	
	for(k=1;k<=T;k++)
	{
		int N,c1=0,c2=0,cost,temp,i;
		scanf(" %d",&N);
		
		for(i=1;i<=N;i++)
		{
			scanf("%d[^ ]",&cost);
			
			cost++;
			
			temp=cost / 30;
			
			if(cost % 30 !=0)
				temp++;
				
			c1=c1 + temp*10;
			
			temp=cost / 60;
			
			if(cost % 60 !=0)
				temp++;
				
			c2=c2 + temp*15;
		}
		
		if(c1<c2)
			printf("Case %d: Respawn %d\n",k,c1);
		
		else if(c2<c1)
			printf("Case %d: Frag %d\n",k,c2);
		
		else
			printf("Case %d: Respawn Frag %d\n",k,c1);
	}
	return 0;
}
