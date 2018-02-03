#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *buffer;
	int count=0,i;
	unsigned long input,n,k;
	size_t  s = 0;
	
	scanf("%lu%lu\n",&n,&k);
	input=0;
	
	buffer=(char *)malloc(sizeof(char)*11);
	
	for(i=0;i<n;i++)
	{
		getline(&buffer,&s,stdin);
		
		input=atoi(buffer);
		
		if(input%k==0)
		count++;
				
	}
		
	
	
	printf("%d\n",count);
	return 0;
	
}
