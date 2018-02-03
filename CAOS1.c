#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int R,C,count=0,i,j	;
		char str[100][100];
		for(i=0;i<51;i++)
			str[0][i]='#';

		scanf(" %d%d",&R,&C);
		
		for(i=1;i<=R;i++)
			scanf(" %s",str[i]);
		
		for(i=3;i<R-1;i++)
		{
			for(j=2;j<C-2;j++)
			{
				if(str[i][j]=='^')
				{
					if(str[i-1][j]=='#' || str[i-2][j]=='#' || str[i+1][j]=='#' || str[i+2][j]=='#' || str[i][j-1]=='#' || str[i][j-2]=='#' || str[i][j+1]=='#' || str[i][j+2]=='#')
						{}
					else
						count++;
				}
			}
		}
		
		printf("%d\n",count);
	}
	return 0;
}
