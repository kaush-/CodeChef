#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int val[1004];

long long int cal(long long int N,long long int K, long long int Ans,char *opr)
{
	int j;
	long long int temp=val[1];
	long long temp2=(K/2)*2;
	K=K-temp2;
		
	for(j=2;j<=N;j++)
	{
		if(strcmp(opr,"XOR")==0)
			temp=temp^val[j];
				
		else if(strcmp(opr,"OR")==0)
			temp=temp | val[j];
		else if(strcmp(opr,"AND")==0)
		{	
			temp=temp & val[j];	
		}
	}
	
	if(strcmp(opr,"XOR")==0 && (K==1))
	{
		Ans=Ans^temp;
	}
				
	else if(strcmp(opr,"OR")==0)
		Ans=temp | Ans;

	else if(strcmp(opr,"AND")==0)
		Ans=temp & Ans;	

	return Ans;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i;
		long long int N,K,Ans;
		scanf(" %lld%lld%lld",&N,&K,&Ans);
		
		for(i=1;i<=N;i++)
			scanf(" %lld",&val[i]);
		
		char opr[4];
		scanf(" %s",opr);
		
		if(K==0)
		{
			printf("%lld\n",Ans);
		}
		else
		{
			Ans=cal(N,K,Ans,opr);
		
			printf("%lld\n",Ans);
		}
	}
	return 0;
}
