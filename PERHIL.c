#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int Sq[1000002],i,j,temp,sr; 
int rt;

long long int S;
 
int main(void)
{
	int T;
	scanf("%d",&T);
	for(i=1;i<=1000000;i++)
		Sq[i]=i*i;


//	printf("%lld\n",Sq[1000000]);

	while(T--)
	{
		long long int flag=0;

		scanf(" %lld",&S);
		
		sr=Sq[S];
		
		for(i=1;i<S;i++)
		{
			temp=sr-Sq[i];
			rt=sqrt(temp);
			
			if(Sq[rt]==temp)
			{
				flag=1;
				printf("%d %lld\n",rt,i);
				break;
			}
		}
		
		if(flag==1)
			printf("PERFECT\n");
		else
			printf("IMPERFECT\n");
	}
	return 0;
}
