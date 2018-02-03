#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int N,val[1000001]={},num,i,max=0;
	scanf(" %d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf(" %d",&num);
		val[num]++;
		if(max<num)
			max=num;
	}
	for(i=1;i<=max;i++)
	{
		while(val[i]>0)
		{
			printf("%d\n",i);
			val[i]--;
		}
	}
	
	return 0;
}
