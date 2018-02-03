#include<stdio.h>
#include<stdlib.h>


int A[51],B[51],temp[51]={},n;
float P[51];

float cal(int i)
{
	float Av=0,Bv=0;

	if(i>n)
		return 1;
	
	if(P[i]==1)
	{
		
		if(temp[A[i]]==0)
		{
			temp[A[i]]++;
			Av=cal(i+1);
			
			temp[A[i]]--;
		}
	}
	
	else if(P[i]==0)
	{
		if(temp[B[i]]==0)
		{
			temp[B[i]]++;
			Bv=cal(i+1);
			
			temp[B[i]]--;
		}	
	}
	
	else if(A[i]==B[i])
	{
		if(temp[A[i]]==0)
		{
			temp[A[i]]++;
			Av=cal(i+1);
			
			temp[A[i]]--;
		}
	}
	
	else
	{
		if(temp[A[i]]==0)
		{
			temp[A[i]]++;
			Av=P[i]*cal(i+1);
			
			temp[A[i]]--;
		}
		
		if(temp[B[i]]==0)
		{
			temp[B[i]]++;
			Bv=(1-P[i])*cal(i+1);
			
			temp[B[i]]--;
		}
		
	}
	return Av+Bv;
}
int main(void)
{
	int T,i;
	scanf("%d",&T);
	
	while(T--)
	{
		scanf(" %d",&n);
		
//		if(n>16)
//			continue;
		
		for(i=1;i<=n;i++)
		{
			scanf(" %f%d%d",&P[i],&A[i],&B[i]);
			P[i]=P[i]/100;
			//temp[i]=0;
		}
		
		float ans = cal(1);
		
		printf("%f\n",ans);
	}
	return 0;
}
