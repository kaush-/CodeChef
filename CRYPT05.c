#include<stdio.h>
#include<stdlib.h>
int fib[50001][1001];
void calfib()
{
	int i,j,carry;
	fib[1][0]=1;
	fib[2][0]=1;

	fib[1][1]=1;
	fib[2][1]=1;	

	for(i=3;i<=5000;i++)
	{
		int dig1=fib[i-1][0];
		
		carry=0;
		
		for(j=1;j<=dig1;j++)
		{
			fib[i][j]=fib[i-1][j] + fib[i-2][j] + carry;
			
			if(fib[i][j]>=10)
			{
				carry=fib[i][j]/10;
				fib[i][j]=fib[i][j] % 10;
				
			}
			else
				carry=0;
		}
		fib[i][j]=carry;
		if(carry>0)
			fib[i][0]=dig1+1;
		else
			fib[i][0]=dig1;
	}
}

int main(void)
{
	calfib();
	while(1)
	{
		int n,i;
		scanf(" %d",&n);

		if(n==0)		
			break;
//		printf("digits= %d\n",fib[n][0]);
		
		for(i=fib[n][0];i>=1;i--)
			printf("%d",fib[n][i]);
		
		printf("\n");
	}
	return 0;
}
