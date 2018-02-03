#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,Val[1003]={},i,max=0,min=10000,temp,count=0;
		scanf(" %d",&N);
		
		for(i=1;i<=N;i++)
		{
			scanf(" %d",&temp);
			if(temp>max)
				max=temp;
			if(temp<min)
				min=temp;
			
			Val[temp]++;
		}
		
		int mid=(max+min)/2;
		
		for(i=min;i<=max;i++)
		{
			if(Val[i]==1)
				count=count+abs(mid-i);
		}
		
		printf("%d\n",count);
	}
	return 0;
}
