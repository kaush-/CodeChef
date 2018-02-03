#include<bits/stdc++.h>

using namespace std;
int main(void){
	int T;
	scanf("%d", &T);
	while(T--){
		long long x,y;
		scanf("%lld%lld", &x,&y);
		
		if(x == 0 && y == 0)
			printf("YES\n");
		else if(x == 0){
			if(y % 2 == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else if(y == 0){
			if(x > 0 && x % 2 == 1)
				printf("YES\n");
			else if(x < 0 && x % 2 == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else if(x > 0 && y > 0){
			if(x % 2 == 1 && y <= (x+1))
				printf("YES\n");
			else if(y % 2 == 0 && x < y)
				printf("YES\n");
			else 
				printf("NO\n");
		}
		else if(x > 0 && y < 0){
			y = abs(y);
			if(x % 2 == 1 && y < x)
				printf("YES\n");
			else if(y % 2 == 0 && x <= (y+1))
				printf("YES\n");
			else 
				printf("NO\n");
		}
		else{
			x = abs(x);
			y = abs(y);
			if(x % 2 == 0 && y <= x)
				printf("YES\n");
			else if(y % 2 == 0 && x <= y)
				printf("YES\n");
			else
				printf("NO\n");
		}
		
	}
	return 0;
}
