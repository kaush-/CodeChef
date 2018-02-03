#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Merge(long long int *A,int p,int mid,int r)
{
	long long int T[100001],i,j,k;
	
//	loc=r-p+1;
	
//	T=(int *)malloc(sizeof(int) * loc);
	
	for(i=p;i<=r;i++)
		T[i]=A[i];
		
	j=p;
	k=mid+1;
	
	for(i=p;i<=r;i++)
	{
		
	
		if((T[j]<T[k] || k==r+1) && j!=(mid+1))
		{
			A[i]=T[j];
			j++;
		}
		else
		{
			A[i]=T[k];
			k++;
		}
	}
	
}

void MergeSort(long long int *A,int p,int r)
{
	if(p<r)
	{
		int mid=(p+r)/2;
		
		MergeSort(A,p,mid);
		MergeSort(A,mid+1,r);
		Merge(A,p,mid,r);
	}
	
}

int main(void)
{
	int N;
	scanf("%d",&N);
	
	long long int val[100001]={},count=0,sum1=0;
	int i;
	long long int temp;
	for(i=0;i<N;i++)
	{
		scanf(" %lld[^ ]",&temp);
		if(temp<0)
		{
			val[count++]=temp;
			sum1=sum1+llabs(val[count-1]);
		}
	}
	
	long long int x,t1cost,t2cost;
	scanf("%lld",&x);
	
	if(x==0)
	{
		printf("0");
		return 0;
	}
	
	MergeSort(val,0,count-1);
	
	long long int lim=count;
	long long int add=0;
	
	if(x>count-1)
	{
		printf("%lld",sum1);
		return 0;
	}
	else
	{
		t1cost=llabs(val[x-1])*x;
		add=llabs(val[x-1]);
		lim=x-1;
	}
	
	long long int sum=0;
	
	for(i=0;i<lim;i++)
		sum=sum+(val[i]+add);
	
	t2cost=llabs(sum);
	
	printf("%lld",t1cost+t2cost);
	
	return 0;
}
