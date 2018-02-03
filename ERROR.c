#include<stdio.h>
#include<string.h>
#include<string.h>
int flag,len;
char str[100001];

void check()
{
	int i;
	if(len<3)
		return;
	
	for(i=0;i<len-2;i++)
	{
		if((str[i]=='0' && str[i+1] == '1' && str[i+2] == '0') || (str[i]=='1' && str[i+1] == '0' && str[i+2] == '1'))
		{
			flag=1;
			return;
		}
	}
}

int main(void)
{
	int T;
	scanf(" %d",&T);
	
	while(T--)
	{
		scanf(" %s",str);
		
		len=strlen(str);
		
		flag = 0;
		
		check();
		
		if(flag==1)
			printf("Good\n");
		else
			printf("Bad\n");
	}
	return 0;
}
