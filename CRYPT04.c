#include<stdio.h>
#include<stdlib.h>
int val[100001];
void cal()
{
	int i;
	for(i=1;i<=100001;i++)
		val[i]=2*i;
}

int main(void)
{
	cal();
	while(1)
	{
		int n,i,temp1[100002],temp2[50002]={},j;
		scanf(" %d",&n);
		if(n==0)		
			break;
			
		j=1;
		
		if(n % 2==1)
		{
			temp1[j]=n;
			j++;
		}
		
		for(i=2;i<=n;i=i+2)
		{
			temp1[j]=i;
			j++;
		}
		
		n=j-1;
		
		while(n>1)
		{
			j=1;
			
			if(n % 2==1)
			{
				temp2[j]=temp1[n];
				j++;
			}
			
			for(i=2;i<=n;i=i+2)
			{
				temp2[j]=temp1[i];
				j++;
			}
			
			n=j-1;

			for(j=1;j<=n;j++)			
				temp1[j]=temp2[j];
		}
		printf("%d\n",temp1[1]);
	}
	return 0;
}
