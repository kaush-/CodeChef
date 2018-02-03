#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
long long int N,root,i,count;

void check()
{
	long long int a=i;
	long long int b=N/i;
	char str1[20],str2[20];
	sprintf(str1, "%lld", a);
	sprintf(str2, "%lld", b);
	
	int j;
	for(j=0;j<strlen(str1);j++)
	{
		if(str1[j]=='4' || str1[j]=='7')
		{
			count++;
			break;
		}
	}
	for(j=0;j<strlen(str2);j++)
	{
		if(str2[j]=='4' || str2[j]=='7')
		{
			count++;
			break;
		}
	}
	return;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		count=0;
		scanf(" %lld",&N);
		
		root=sqrt(N);
		
		for(i=1;i<=root;i++)
		{
			if( (N/i)*i == N)
				check(i);
			
		}
		
		printf("%lld\n",count);
	}
	return 0;
}
