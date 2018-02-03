#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int N,B,flag;

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int step=0,i;
		scanf(" %d%d",&N,&B);
		
		N= N*(N+1)/2;
		
		if(B>0)
		{
			int temp=sqrt(1+8*B);
		
			if(temp*temp == 1+8*B)
				printf("%d\n",N-1);
			else
				printf("%d\n",N);
		}
		else
				printf("%d\n",N);
	}
	return 0;
}
