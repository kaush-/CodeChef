#include<stdio.h>
#include<string.h>
#include<string.h>
#include<math.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int grid[200]={},count,i,j;
		char str[10005];
		
		scanf(" %s",str);
		for(i=0;i<strlen(str);i++)
		{
			j = str[i];
			grid[j]++;
		}
		
		scanf(" %s",str);
		count = 0;
		for(i=0;i<strlen(str);i++)
		{
			j = str[i];
		
			if(grid[j]>0)
			{
				count++;
				grid[j]--;
			}
		}
		
		printf("%d\n",count);
	}
	return 0;
}
