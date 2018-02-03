#include<stdio.h>
#include<string.h>
#include<string.h>
#include<math.h>

int main(void)
{
	int N,A[51],B[51],i,j,Q,count,left,right;
	scanf(" %d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d[^ ]",&A[i]);
		B[i]=1;
	}
	
	for(i=0;i<N;i++)
	{
		left = 0;
		right = 0;
		for(j=i;j<N;j++)
		{
			if(A[i]>A[j])
				break;
			else
				right++;
		}
		right--;
		
		for(j=i-1;j>=0;j--)
		{
			if(A[i]>=A[j])
				break;
			else
				left++;
		}
		
		B[i]= B[i] + left + right + left*right;
	}
	
	scanf(" %d",&Q);
	while(Q--)
	{
		int K;
		scanf(" %d",&K);
		count=0;
		for(i=0;i<N;i++)
		{
			if(A[i]==K)
				count=count+B[i];
		}
		
		printf("%d\n",count);
	}
	
	return 0;

}
