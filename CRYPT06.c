#include<stdio.h>
#include<stdlib.h>
int val[30],sval[30],k;


void cal(int c, int l)
{
	int i;
	if(c==6)
	{
		for(i=0;i<6;i++)
			printf("%d ",val[i]);
			
		printf("\n");
		return;
	}
	
	if(l>k)
		return;
	
	val[c]=sval[l];
	
	cal(c+1,l+1);
	
	val[c+1]=0;
	
	cal(c,l+1);
	
	return;
}

int main(void)
{
	int flag=0;
	while(1)
	{
		int sort[60]={},i,v;
		scanf(" %d",&k);
		
		if(k==0)
			break;
			
		if(flag==1)
			printf("\n");
		
		for(i=1;i<=k;i++)
		{
			scanf("%d[^ ]",&v);
			sort[v]++;
		}
		
		v=1;
		for(i=1;i<=49;i++)
		{
			if(sort[i]>0)
			{
				sval[v]=i;
				v++;
			}
		}
		
		cal(0,1);
		
		flag=1;
	}
	
	return 0;
}
