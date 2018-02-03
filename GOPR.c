#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int N,MT1,MT2,ST1,ST2,HT1,HT2;

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf(" %d%d%d", &HT1,&MT1,&ST1);
		int T1= HT1*3600 + MT1*60 + ST1;

		scanf(" %d%d%d", &HT2,&MT2,&ST2);
		int T2= HT2*3600 + MT2*60 + ST2;
		
		int RT=T2-T1;
		
		RT=RT % 400;
		
		if((RT>=0 && RT<100) || (RT>=200 && RT<300))
			printf("S\n");
		else
			printf("C\n");
		
	}
	return 0;
}
