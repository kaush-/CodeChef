#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int G,len;
char grid[101][101],str[101];


int check(int x,int y)
{
	int flag,i,j,k;
	//checking upward
	
	if(len<=x+1)
	{
		i=x;
		flag=0;
		for(j=0;j<len;j++)
		{
			if(grid[i][y]==str[j])
				i--;
			else
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,x+1-len+1,y+1);
			return 1;
		}
	}
	//checking downward
	
	if(len<=G-x)
	{
		i=x;
		flag=0;
		for(j=0;j<len;j++)
		{
			if(grid[i][y]==str[j])
				i++;
			else
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,x+len,y+1);
			return 1;
		}
	}

	//checking right
	
	if(len<=G-y)
	{
		i=y;
		flag=0;
		for(j=0;j<len;j++)
		{
			if(grid[x][i]==str[j])
				i++;
			else
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,x+1,y+len);
			return 1;
		}
	}

	//checking left
	
	if(len<=y+1)
	{
		i=y;
		flag=0;
		for(j=0;j<len;j++)
		{
			if(grid[x][i]==str[j])
				i--;
			else
			{
				flag=1;
				break;
			}
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,x+1,y-len+2);
			return 1;
		}
	}

//checking Diagonal
	
	//checking BOTTOM-RIGHT
		i=x;
		k=y;
		
		flag=0;
		for(j=0;j<len;j++)
		{
			if(i>=G || k>=G)
			{
				flag=1;
				break;
			}

			if(grid[i][k]==str[j])
			{
				i++;
				k++;
			}
			else
			{
				flag=1;
				break;
			}
			
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,i,k);
			return 1;
		}

	//checking TOP-LEFT
		i=x;
		k=y;
		
		flag=0;
		for(j=0;j<len;j++)
		{
			if(i<0 || k<0)
			{
				flag=1;
				break;
			}

			if(grid[i][k]==str[j])
			{
				i--;
				k--;
			}
			else
			{
				flag=1;
				break;
			}
			
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,i+2,k+2);
			return 1;
		}

	//checking BOTTOM-LEFT
		i=x;
		k=y;
		
		flag=0;
		for(j=0;j<len;j++)
		{
			if(i>=G || k<0)
			{
				flag=1;
				break;
			}

			if(grid[i][k]==str[j])
			{
				i++;
				k--;
			}
			else
			{
				flag=1;
				break;
			}
			
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,i,k+2);
			return 1;
		}

	//checking TOP-RIGHT
		i=x;
		k=y;
		
		flag=0;
		for(j=0;j<len;j++)
		{
			if(i<0 || k>=G)
			{
				flag=1;
				break;
			}

			if(grid[i][k]==str[j])
			{
				i--;
				k++;
			}
			else
			{
				flag=1;
				break;
			}
			
		}
		
		if(flag==0)
		{
			printf("%d,%d %d,%d\n",x+1,y+1,i+2,k);
			return 1;
		}
	
	return 0;

}

int main(void)
{
	int i,j,flag;
	char pivot;

	scanf("%d",&G);
	
	for(i=0;i<G;i++)
		scanf("%s",grid[i]);
		
	while(1)
	{
		scanf("%s",str);
		
		if(str[0]=='0')
			break;
		
		len=strlen(str);
		if(len>G)
		{
			printf("Not found\n");
			continue;
		}
		
		pivot=str[0];
		
		flag=0;
		
		for(i=0;i<G;i++)
		{
			if(flag==1)
				break;
			
			for(j=0;j<G;j++)
			{
				if(grid[i][j]==pivot)
				{
					flag=check(i,j);
					if(flag==1)
						break;
				}
			}
		}
		
		if(flag==0)
			printf("Not found\n");
	}

return 0;	
}
