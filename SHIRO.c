#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int t;
	scanf("%d",&t);
	
	while(t!=0)
	{	
		int N,i,j, *a,sum,start;
	
		double *p,arr[100003]={};
	
		scanf("%d",&N);
	
		a=(int *)malloc(sizeof(int)*N);
		p=(double *)malloc(sizeof(double)*N);
		
		for(i=0;i<N;i++)
			scanf(" %d[^ ]",&a[i]);
			
		sum=start=0;
			
		for(i=0;i<N;i++)
		{
			scanf(" %lf[^ ]",&p[i]);
			sum=sum+a[i];
			p[i]=p[i]/100;
			if(p[i]==1)
				start=start+a[i];
		}
		
		double temp=1;
	
		for(i=0;i<N;i++)
			if(p[i]!=1)
				temp=temp*(1-p[i]);
		
		arr[start]=temp;
		
		for(i=0;i<N;i++)
		{
			if(p[i]!=0 && p[i]!=1)
			{
				for(j=sum;j>=start;j--)
				{
					if(arr[j]!=0)
					{
						arr[j+a[i]]+=(arr[j]/(1-p[i]))*p[i];
					}
				}
			}
		}
		
		double ans=0;
		
		for(i=(sum+1)/2;i<=sum;i++)
			ans=ans+arr[i];
			
		printf("%lf\n",ans);
		
		t--;
	}
			
}
