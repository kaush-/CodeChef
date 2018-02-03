#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
#define MAX 1000000007

int main(void){
	ull T;
	scanf("%lld", &T);
	while(T--){
		ull isEven = 0;
		char str[100000];
		
		scanf("%s",str);
		ull len = strlen(str);
		
		ull ans = 1;
		
		for(ull i = 0; i<len; i++){
			if(isEven==0){
				if(str[i]=='l')
					ans = (ans*2) % MAX;
				else
					ans = (ans * 2 + 2) % MAX;
			}
			else{
				if(str[i]=='l')
					ans = (ans*2 - 1) % MAX;
				else
					ans = (ans * 2 + 1) % MAX;
			}
			
			isEven = (isEven + 1) % 2;
		}
		
		printf("%lld\n", ans);
	}
	return 0;
	
	
}
