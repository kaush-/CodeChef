#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000000
long long int N,dem[10002][3]={},count,kill;

void Merge(long long int *A,long long int p,long long int mid,long long int r)
{
	long long int T[10005],i,j,k;
	
//	loc=r-p+1;
	
//	T=(int *)malloc(sizeof(int) * loc);
	
	for(i=0;i<N;i++)
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

void MergeSort(long long int *A,long long int p,long long int r)
{
	if(p<r)
	{
		long long int mid=(p+r)/2;
		
		MergeSort(A,p,mid);
		MergeSort(A,mid+1,r);
		Merge(A,p,mid,r);
	}
	
}
long long int fetch()
{
	long long int ind,min=MAX,i,j,rc,cc,x,y;
	
	for(j=0;j<N;j++)
	{
		if(dem[j][2]>0)
		{
			x=dem[j][0];
			y=dem[j][1];
			rc=0;cc=0;
			
			for(i=0;i<N;i++)
			{
				if(dem[i][2]>0)
				{
					if(dem[i][0]==x)
						rc++;
					if(dem[i][1]==y)
						cc++;
				}
			}
		
			if(rc<cc)
				cc=rc;
			
			if(cc<min)
			{
				min=cc;
				ind=j;
			}
			if(min==1)
				return ind;
		}
	}
	return -1;
}


int main(void)
{
	int T;
	scanf("%d",&T);
	
	while(T--)
	{
		long long int i,x,y,rc,cc,index;
		scanf(" %lld",&N);
		
		count=0;
		kill=0;
		

		for(i=0;i<N;i++)
		{
			scanf(" %lld%lld",&dem[i][0],&dem[i][1]);
			dem[i][2]=1;
		}

		
		while(1)
		{
			index=fetch();
			
			if(index<0)
				break;
			
			x=dem[index][0];
			y=dem[index][1];
			
			rc=0;cc=0;
			
			for(i=0;i<N;i++)
			{
				if(dem[i][2]>0)
				{
					if(dem[i][0]==x)
						rc++;
					if(dem[i][1]==y)
						cc++;
				}
			}
			
			if(rc>=cc)
			{
				for(i=0;i<N;i++)
				{
					if(dem[i][2]>0 && dem[i][0]==x)
					{
						dem[i][2]--;
						kill++;
					}
				}
			}
			else
			{
				for(i=0;i<N;i++)
				{
					if(dem[i][2]>0 && dem[i][1]==y)
					{
						dem[i][2]--;
						kill++;
					}
				}
			}
			count++;

		}
		
		long long int r[10005]={},c[10005]={};
		rc=0;
		for(i=0;i<N;i++)
		{
			if(dem[i][2]>0)
			{
				r[rc]=dem[i][0];
				c[rc]=dem[i][1];
				rc++;
			}
		}
	
		MergeSort(r,0,rc-1);
		MergeSort(c,0,rc-1);
		
		long long int oldr=-9,oldc=-9,rmin=0,cmin=0;
		for(i=0;i<rc;i++)
		{
			if(r[i]!=oldr)
			{
				rmin++;
				oldr=r[i];
			}
			if(c[i]!=oldc)
			{
				cmin++;
				oldc=c[i];
			}

		}
		
		if(rmin<cmin)
			cmin=rmin;
		
		
		printf("%lld\n",count+cmin);
		
	}
	return 0;
}
