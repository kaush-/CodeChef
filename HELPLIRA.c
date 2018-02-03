#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int N;
	scanf("%d",&N);
	int x1,y1,x2,y2,x3,y3;
	float Ar,min=-1,max=-1;
	int minx,maxx;
	int count=0;
	
	while(N--)
	{
		count++;
		scanf(" %d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		Ar= fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2;
		
//		printf("%f\n",Ar);
		if(Ar>=max || max<0)
		{
			max=Ar;
			maxx=count;
		}
		
		if(Ar<=min || min<0)
		{
			min=Ar;
			minx=count;
		}
	}
	
	printf("%d %d",minx,maxx);
	return 0;
}
