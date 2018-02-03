#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	int U,N,i,t,c;
	float D;
	int *mn,*cs,*tc;
	
	float *ncr;
	
	scanf(" %d",&t);
	tc=(int *)malloc((sizeof(int))*t);	

	for(c=0;c<t;c++)
	{
		scanf(" %f%d%d",&D,&U,&N);
		D=(float)((int)(D*100))/100;
		//printf("%f",D);
		D=D * U;
	
		mn=(int *)malloc((sizeof(int))*N);
		ncr=(float *)malloc((sizeof(float))*N);
		cs=(int *)malloc((sizeof(int))*N);
	
		float min=100000000;
		int in;
		for(i=0;i<N;i++)
		 {
		 scanf(" %d%f%d",&mn[i],&ncr[i],&cs[i]);
		 ncr[i]=(float)((int)(ncr[i]*100))/100;
		 ncr[i]=(U*ncr[i])+(float)cs[i]/(float)mn[i];
		 if(ncr[i]<min)
		 	{
		 	min=ncr[i];
		 	in=i;
		 	}
		 }
		 
		 if((D-min)>0)
		 tc[c]=in+1;
		 else
		 tc[c]=0;
	
		 free(mn);
		 free(cs);
		 free(ncr);
		 mn=NULL;
		 cs=NULL;
		 ncr=NULL;
	}
	for(c=0;c<t;c++)
		printf("%d\n",tc[c]);
	free(tc);
	tc=NULL;
	
	return 0;
	 
}
