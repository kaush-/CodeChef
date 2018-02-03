#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int t,c,*tc,i;
	char *str;

	scanf(" %d",&t);
	
	tc=(int *)malloc(sizeof(int)*t);
	
	for(c=0;c<t;c++)
	{
		str=(char *)malloc(sizeof(char)*100);	
		tc[c]=0;
		
		scanf(" %s",str);
		
		for(i=0;str[i]!='\0';i++)
		{
			switch(str[i])
			{
				case 'A':case 'D':case 'O':case 'P':case 'Q':case 'R':tc[c]=tc[c]+1;
															break;
				
				case 'B':tc[c]=tc[c]+2;
						break;
			}
		}
		
		free(str);
		str=NULL;
		
	}
	
	for(c=0;c<t;c++)
	{
		printf("%d\n",tc[c]);
	}
	
	return 0;
}
