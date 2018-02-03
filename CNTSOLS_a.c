#include<stdio.h>
#include<math.h>

/*int calc(int a,int b,int c)
{
	int i;
	int ob=b;
	for(i=0;i<c;i++)
	{
		b=(b+ob) % 1000000007;
	}


}
*/



int modu(int a,int b,int c)
{
	if(a > c)
	a=a % c;
	
	if(a==0 && b != 0)
	return 0;

	if(a==0 && b == 0)
	return 1 % c;
	
	if(a==1 || b==0)
	return 1 % c ;
	
	if(b==1)
	return a % c;
	
	int np=2;
	while(pow(a,np)<c)
	np++;

	int na= (long long int)pow(a,np) % c;
	
	int nxp=b/np;

	int pw=b-(nxp*np);
	
	int rm= pow(a,pw);
	
	return modu(na,nxp,c)*rm % c;
	
}

int main(void)
{
	int tc[10],t,c;
	
	scanf(" %d",&t);
	
	for(c=0;c<t;c++)
	{
		int upper,d,val[40];
		int N,m;
		int x1,x2,x3;
	
		scanf(" %d%d%d%d",&upper,&d,&m,&N);
	
		int i;
		for(i=0;i<N;i++)
		{
			val[i]=modu(i,d,N);
		}
	
		int vault[40];
		int mod;
		int turns=upper/N;
		int remain=upper % N;

		for(i=0;i<N;i++)
			vault[i]=turns;
		

			
		for(i=0;i<=remain;i++)
		{
			vault[i]=vault[i]+1;
		}
		
	//	for(i=0;i<N;i++)
//		printf("%d\n",vault[i]);
	
		int count=0;
		x1=x2=x3=0;
		int flag=1;
		while(flag!=0)
			{
				if((val[x1 % N] + val[x2 % N] + val[x3 % N]) % N == m)
				{
				 	count=count+ (long long)(vault[x1 % N] * ((long long)(vault[x2 % N] * vault[x3 % N]) % 1000000007)) % 1000000007;
				 	count=count % 1000000007;
				}
		
				x3=x3+1;
			
				if(x3==N)
				{
					x3=0;
					x2=x2+1;
				}
			
				if(x2==N)
				{
					x2=0;
					x1=x1+1;
				}
		
				if(x1==N)
				{
					x1=0;
					flag=0;
				}
			}

		//printf("%d",count);
		
		
		
	tc[c]=count;
		
		//printf("Total :%d\n",tc[c]);
		
	}
	
	for(c=0;c<t;c++)
	printf("%d\n",tc[c]);

	return 0;
}
