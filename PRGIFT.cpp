#include<bits/stdc++.h>

using namespace std;
int main(void){
	int T;
	scanf("%d", &T);
	while(T--){
		int N,K;
		scanf("%d%d", &N,&K);
		int num;
		int count = 0;
		
		for(int i = 0; i<N;i++){
			scanf("%d[^ ]", &num);
			if(num % 2 == 0)
				count++;
		}
		
		if(K==0 && count==0)
			printf("YES\n");
		else if(K==0 && count < N)
			printf("YES\n");
		else if(K==0 && count >= N)
			printf("NO\n");	
		else if(K!= 0 && count>=K)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
	return 0;
}
