#include<stdio.h>
#include<stdlib.h>
int N,M,C2,C3,black[10005][2],white[10005][2],b,w;
char str[105][105];

int main(void)
{
	int T,i,j;
	scanf("%d",&T);
	while(T--)
	{
		b=0,w=0;
		scanf(" %d%d%d%d",&N,&M,&C2,&C3);
		
		for(i=1;i<=N;i++)
			scanf(" %s",str[i]);
		
		for(i=1;i<=N;i++)
		{
			for(j=0;j<M;j++)
			{
				if(str[i][j]=='B')
				{
					b++;
					black[b][0]=i;
					black[b][1]=j;
				}
				if(str[i][j]=='W')
				{
					w++;
					white[w][0]=i;
					white[w][1]=j;
				}

			}
		}
		
		int cost1,cost2,cost;
		
		cost1=w*C2;
		cost2=b*C3;
		
		if(cost1>cost2)
			cost=cost2;
		else
			cost=cost1;
		
		if(cost==cost1)
		{
			printf("%d\n",w);
		
			for(i=1;i<=w;i++)
				printf("2 %d %d\n",white[i][0],white[i][1]+1);
		}
		else
		{
			printf("%d\n",b);
		
			for(i=1;i<=b;i++)
				printf("3 %d %d\n",black[i][0],black[i][1]+1);
		}
	}
	return 0;
}
