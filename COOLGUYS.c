#include<stdio.h>
#include<math.h>
long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
} 

int main() 
{ 
	int t; 
	scanf("%d",&t);
	
	while(t--)
	{ 
		long long n;
		int i;
		
		scanf("%lld",&n);
		
		long long a=0,b;
		
		b=n*n;
		
		int m=sqrt(n);
		
		for(i=1;i<=m;i++)
			a+=(n/i);
		
		a=2*a-m*m;
		
		long long x=gcd(a,b);
		a=a/x;
		b=b/x;
		
		printf("%lld/%lld\n",a,b); 
	} 
	return 0; 
}
