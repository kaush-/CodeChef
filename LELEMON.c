#include<stdio.h>
#include<stdlib.h>

int max(int *ar)
{
	int total=ar[0];
	int i,max=0,maxi;
	for (i=1;i<=total;i++)
	{
		if(ar[i]>=max)
		{
			max=ar[i];
			maxi=i;
		}
	}
	ar[maxi]=0;
	return(max);
}

int main(void)
{
	int t,n,m,i,j,k,rt,rm,count;
	int *ms,**vc,*ttl;
	
	scanf("%d",&t);
	ttl=(int *)malloc(sizeof(int)*t);	
	
	for(k=0;k<t;k++)
	{
		count=0;
		scanf("%d%d\n",&n,&m);
	
		ms=(int *)malloc(sizeof(int)*m);
	
		for(i=0;i<m;i++)
			scanf(" %d[^ ]",&ms[i]);
			
		vc=(int **)malloc(sizeof(int *)*n);
	
		for(i=0;i<n;i++)
		{
			scanf(" %d[^ ]",&rt);
			vc[i]=(int *)malloc(sizeof(int)*(rt+1));
			vc[i][0]=rt;
		
			for(j=1;j<=rt;j++)
				scanf("\n%d[^ ]",&vc[i][j]);
			
		
		}
	
		for(i=0;i<m;i++)
		{
			rm=ms[i];
			count=count+max(vc[rm]);
		}
	
	ttl[k]=count;
	
		free(ms);
		free(vc);
	
	}
	for(i=0;i<t;i++)
	printf("%d\n",ttl[i]);
	
	free(ttl);
	return 0;
	
	

}

