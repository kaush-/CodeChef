#include<stdio.h>
#include<stdlib.h>

int n,H[60],D[60],diff[60],max=-200,maxi,min=200,mini,count;
int Diff,temp;
void oper()
{
	int i;
	diff[maxi]--;
	count++;
	for(i=1;i<=n;i++)
	{
		if(i!=maxi)
			diff[i]++;
	}
}
void findmax()
{
	int i;
	maxi=1;
	max=diff[maxi];
	for(i=2;i<=n;i++)
	{
		if(diff[i]>max)
		{
			max=diff[i];
			maxi=i;
		}
	}
}
void findmin()
{
	int i;
	mini=1;
	min=diff[mini];
	for(i=2;i<=n;i++)
	{
		if(diff[i]<min)
		{
			min=diff[i];
			mini=i;
		}
	}
}

int main(void)
{
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
		int i;
		max=-20000;
		min=20000;
		count=0;
		scanf(" %d",&n);
		
		for(i=1;i<=n;i++)
			scanf(" %d",&H[i]);
		
		for(i=1;i<=n;i++)
		{
			scanf(" %d",&D[i]);
			diff[i]=H[i]-D[i];
			if(diff[i]>=max)
			{
				max=diff[i];
				maxi=i;
			}
			if(diff[i]<=min)
			{
				min=diff[i];
				mini=i;
			}
		}
		
		if(n==1)
		{
			if(diff[1]==0)
			{
				printf("0\n");
				continue;
			}
			else
			{
				printf("%d\n",abs(diff[1]));
				continue;
			}
		}
		
		if(n==2 && diff[1]!=-diff[2])
		{
			printf("-1\n");
			continue;		
		}
		
		while(min<0)
		{
			oper();
			findmax();
			findmin();
		}
		
		if(min==0 && max==0)
			printf("%d\n",count);
		else
			printf("-1\n");

		
	}
	return 0;
}
