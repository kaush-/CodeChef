#include<stdio.h>
#include<stdlib.h>
int fire[50][50]={},mon[50][50]={},mcor[500][3]={},R,C,count,pcount;

void delmob(int x,int y)
{
	int i;
	for(i=1;i<=count;i++)
	{
		if(mcor[i][0]==x && mcor[i][1]==y)
		{
			mcor[i][0]=0;
			mcor[i][1]=0;
			mcor[i][2]=0;
			
			return;
		}
	}
}

void reset()
{
	int i,j;
	for(i=1;i<50;i++)
	{
		for(j=1;j<50;j++)
		{
			fire[i][j]=0;
			mon[i][j]=0;
		}
	}
	for(i=1;i<500;i++)
	{
		mcor[i][0]=0;
		mcor[i][1]=0;
		mcor[i][2]=0;
	}
}

void bomb(int m)
{
	int i;
	int x=mcor[m][0];
	int y=mcor[m][1];
	
	//upward fire
	for(i=x-1;i>=1;i--)
	{
		if(fire[i][y]==1)
			break;
		
		fire[i][y]=1;
		if(mon[i][y]==1)
		{
			mon[i][y]=0;
			delmob(i,y);
		}
	}
	//downward fire
	for(i=x+1;i<=R;i++)
	{
		if(fire[i][y]==1)
			break;
		
		fire[i][y]=1;
		if(mon[i][y]==1)
		{
			mon[i][y]=0;
			delmob(i,y);
		}
	}
	//leftside fire
	for(i=y-1;i>=1;i--)
	{
		if(fire[x][i]==1)
			break;
		
		fire[x][i]=1;
		if(mon[x][i]==1)
		{
			mon[x][i]=0;
			delmob(x,i);
		}
	}
	//rightside fire
	for(i=y+1;i<=C;i++)
	{
		if(fire[x][i]==1)
			break;
		
		fire[x][i]=1;
		if(mon[x][i]==1)
		{
			mon[x][i]=0;
			delmob(x,i);
		}
	}
	
	fire[x][y]=1;
	mon[x][y]=0;
}

int maxmon()
{
	int i,max=-1,maxi;
	for(i=1;i<=count;i++)
	{
		if(mcor[i][0]>0)
		{
			if(mcor[i][2]>=max)
			{
				max=mcor[i][2];
				maxi=i;
			}
		}
	}
	return maxi;
}

void moncount()
{
	int i,x,y,rowc,colc,j;
	for(i=1;i<=count;i++)
	{
		if(mcor[i][0]>0)
		{
			x=mcor[i][0];
			y=mcor[i][1];
			rowc=0;
			colc=0;
			
			//counting row up
			for(j=x-1;j>=1;j--)
			{
				if(fire[j][y]==1)
					break;
				
				if(mon[j][y]==1)
					rowc++;
			}
			//counting row down
			for(j=x+1;j<=R;j++)
			{
				if(fire[j][y]==1)
					break;
				
				if(mon[j][y]==1)
					rowc++;
			}
			//counting column left
			for(j=y-1;j>=1;j--)
			{
				if(fire[x][j]==1)
					break;

				if(mon[x][j]==1)
					colc++;
			}
			//counting column right
			for(j=y+1;j<=C;j++)
			{
				if(fire[x][j]==1)
					break;

				if(mon[x][j]==1)
					colc++;
			}
			
			mcor[i][2]=rowc+colc+1;
		}
	}
}


int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,j;
		count=0;
		char str[50][50];

		for(i=0;i<30;i++)
			str[0][i]='#';
		
		reset();

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
						continue;
					else
					{
						count++;
						mon[i][j+1]++;
						mcor[count][0]=i;
						mcor[count][1]=j+1;
						
					}
				}
			}
		}

		moncount();
		pcount=count;
		
		int cmob;
		int flag=0;
		
		while(pcount>0)
		{
			cmob=maxmon();
			pcount=pcount-mcor[cmob][2];
			bomb(cmob);
			flag++;
//			printf("%d : %d\n",flag, pcount);
			mcor[cmob][0]=0;
			mcor[cmob][1]=0;
			mcor[cmob][2]=0;
			moncount();

		}
		
		if(flag%2==1)
			printf("Asuna\n");
		else
			printf("Kirito\n");
		

	}
	return 0;
}
