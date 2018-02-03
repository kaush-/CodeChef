#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int F[25],*CF[25];

int cal(int num,int f,int m)
{
	if(f==0)
	return 1;
	int i,val;	
	val=num;
	for(i=2;i<=f;i++)
		num=(num * val) % m;
	
	return num;
 	

}

void fact(int num,int i)
{
	int j,k;
	
	if(i==0)
		k=0;
	else
		k=i-1;
	
	for(j=0;j<25;j++)
	{
		if(num%F[j]==0)
			CF[j][i]=CF[j][k]+num/F[j];
		else
			CF[j][i]=CF[j][k];
	}
}

int prime(int num)
{
	int i;
	for(i=2;i<=num/2;i++)
		if(num%i==0)
			return 0;
	
	return 1;

}

void calfact(int *a,int num)
{
	int i,j=0;
	
	for(i=2;i<=num;i++)
	{
		if(prime(i))
		{
			a[j]=i;
			j++;
		}
	}

}




int main(void)
{
	int N,i,temp,*A;
	
	scanf(" %d",&N);
	
	calfact(F,100);
	
	for(i=0;i<25;i++)
	{
		CF[i]=(int *)malloc(sizeof(int)*N);
	}
	
	A=(int *)malloc(sizeof(int)*N);
	
	for(i=0;i<N;i++)
		CF[0][i]=0;
	
	for(i=0;i<N;i++)	
	{
		scanf(" %d[^ ]",&A[i]);
		fact(A[i],i);
		
	}
	
	int T;
	
	scanf(" %d",&T);
	
	/*for(i=0;i<25;i++)		
	{
		printf("\n%d: ",F[i]);
		for(j=0;j<N;j++)
			printf("%d ",CF[i][j]);
		
	}*/
	
	while(T!=0)
	{
		int L,R,M,dif,val,count;
		
		scanf(" %d%d%d",&L,&R,&M);
		
		count=1;
		
		for(i=0;i<25;i++)
		{
				if(L==1)
					temp=0;
				else
					temp=CF[i][L-2];

				dif=CF[i][R-1]-temp;
			
				val= cal(F[i],dif,M);
			
				count=(count*val)%M;

		}
		
		printf("%d\n",count);
		
		T--;
	}

	return 0;


}
