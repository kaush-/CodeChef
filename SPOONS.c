#include<stdio.h>

int main(void)
{
	int T,i;
	long long int A[65]={0LL,1LL,2LL,3LL,6LL,10LL,20LL,35LL,70LL,126LL,252LL,462LL,924LL,1716LL,3432LL,6435LL,12870LL,24310LL,48620LL,92378LL,184756LL,352716LL,705432LL,1352078LL,2704156LL,5200300LL,10400600LL,20058300LL,40116600LL,77558760LL,155117520LL,300540195LL,601080390LL,1166803110LL,2333606220LL,4537567650LL,9075135300LL,17672631900LL,35345263800LL,68923264410LL,137846528820LL,269128937220LL,538257874440LL,1052049481860LL,2104098963720LL,4116715363800LL,8233430727600LL,16123801841550LL,32247603683100LL,63205303218876LL,126410606437752LL,247959266474052LL,495918532948104LL,973469712824056LL,1946939425648112LL,3824345300380220LL,7648690600760440LL,15033633249770520LL,30067266499541040LL,59132290782430712LL,118264581564861424LL,232714176627630544LL,465428353255261088LL,916312070471295267LL,1832624140942590534LL};
	scanf(" %d",&T);
	while(T--)
	{
		long long int N;
		scanf(" %lld",&N);
		
		for(i=1;i<=64;i++)
		{
			if(A[i]>=N)
				break;
		}
		
		printf("%d\n",i);
	}
	return 0;
}



