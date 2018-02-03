#include<stdio.h>
#include<stdlib.h>

short int fact[80];
short int length;

void Calc(short int num)
{

	short int i,j,sum,temp;
	for(i=1;i<80;i++)
	fact[i]=0;
	
	fact[0]=1;
	length=1;

	for(i=2;i<=num;i++)
	{
		j=temp=0;
		while(j<length)
		{
			sum=temp+fact[j]*i;
			fact[j]=sum%100;
			j++;
			temp=sum/100;
			
		}
		while(temp>0)
		{
			fact[j++]=temp%100;
			temp=temp/100;
			length++;
		}
	}
	
	printf("%d",fact[length-1]);	
	for(i=length-2;i>=0;i--)
	{
		if(fact[i]>=10)
		printf("%d",fact[i]);
		else
		printf("0%d",fact[i]);
	}
	printf("\n");


}



int main(void)
{
	short int *t,tc,i;
	
	scanf(" %d",&tc);
	
	t=(short int *)malloc(sizeof(short int)*tc);
		
	for(i=0;i<tc;i++)
		scanf(" %d",&t[i]);
	
	for(i=0;i<tc;i++)
		Calc(t[i]);
		
	return 0;

}
