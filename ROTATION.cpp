#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
int N,M;
int inx;
ull arr[100007];

int main(void){
	scanf("%d %d", &N,&M);

	for(int i = 0; i< N; i++)
		scanf("%lld", &arr[i]);
	
	inx = 0;
	
	for(int i = 0; i< M; i++){
		int num;
		char str[4];
		scanf("%s", str);
		scanf("%d", &num);
		switch(str[0]){
			case 'R' : printf("%lld\n", arr[(inx+num-1) % N]);break;
			case 'C' : num = num % N;
					   inx = (inx + num) % N;
					   break;
			
			
			case 'A' : num = num % N;
					   num = N - num;
					   inx = (inx + num) % N;
					   break;
		}
	}
	return 0;
		
}
