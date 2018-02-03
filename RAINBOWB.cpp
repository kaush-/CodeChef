#include<bits/stdc++.h>
#define MOD 1000000007
typedef unsigned long long ull;
using namespace std;

ull N;

long long C(ull n, ull r)
{
    vector< vector<long long> > C(n+1,vector<long long> (r+1,0));
 
    for (ull i=0; i<=n; i++)
    {
        for (ull k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i][k] = 1;
            else
                C[i][k] = (C[i-1][k-1] + C[i-1][k])%MOD;
    }
    return C[n][r];
}

int main(void){
	scanf("%lld", &N);
	
	if(N<13)
		printf("0");
	else{
		N = N - 13;
		if(N%2!=0)
			N--;
		N = N/2;
			
		printf("%lld", C(N+6,6));
		
		
	}
}
