#include<stdio.h>
#include<stdlib.h>
int grid[10][10],sol[9],r,c,ct;

void put(int row,int col)
{
	int i,j;
	//horizontal
	for(i=1;i<=8;i++)
		grid[row][i]++;
	//Vertical
	for(i=1;i<=8;i++)
		grid[i][col]++;

	//bottom right
	i=row;
	j=col;
	while(i<=8 && j<=8)
	{
		grid[i][j]++;
		i++;
		j++;
	}

	//bottom left
	i=row;
	j=col;
	while(i<=8 && j>=1)
	{
		grid[i][j]++;
		i++;
		j--;
	}

	//top left
	i=row;
	j=col;
	while(i>=1 && j>=1)
	{
		grid[i][j]++;
		i--;
		j--;
	}

	//top right
	i=row;
	j=col;
	while(i>=1 && j<=8)
	{
		grid[i][j]++;
		i--;
		j++;
	}
}

void get(int row,int col)
{
	int i,j;
	//horizontal
	for(i=1;i<=8;i++)
		grid[row][i]--;
	//Vertical
	for(i=1;i<=8;i++)
		grid[i][col]--;

	//bottom right
	i=row;
	j=col;
	while(i<=8 && j<=8)
	{
		grid[i][j]--;
		i++;
		j++;
	}

	//bottom left
	i=row;
	j=col;
	while(i<=8 && j>=1)
	{
		grid[i][j]--;
		i++;
		j--;
	}

	//top left
	i=row;
	j=col;
	while(i>=1 && j>=1)
	{
		grid[i][j]--;
		i--;
		j--;
	}

	//top right
	i=row;
	j=col;
	while(i>=1 && j<=8)
	{
		grid[i][j]--;
		i--;
		j++;
	}
}

void cal(int col,int count)
{
	int i;
	if(col==c)
		col++;

	if(count==8)
	{
		printf(" %d      ",ct);
		for(i=1;i<=8;i++)
		{
			if(i<8)
				printf("%d ",sol[i]);
			else
				printf("%d",sol[i]);
		}
		
		printf("\n");
		
		ct++;
	}
	
	if(col>8)
		return;
	
	for(i=1;i<=8;i++)
	{
		if(grid[i][col]==0)
		{
			put(i,col);
			
			sol[col]=i;
			
			cal(col+1,count+1);
			
			get(i,col);
			
			sol[col]=0;
		}
	}

	return;
}

int main(void)
{
	int i,j;
	
	scanf("%d%d",&r,&c);
	
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
			grid[i][j]=0;
		
		sol[i]=0;
	}
	
	ct=1;
	
	put(r,c);
	
	sol[c]=r;
	
	printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
	cal(1,1);
	
	return 0;
}
