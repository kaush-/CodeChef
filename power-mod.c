#include<stdio.h>
#include<math.h>

int modu(int a,int b,int c)
{
	if(a > c)
	a=a % c;
	
	if(a==0)
	return 0;

	if(a==1 || b==0)
	return 1;
	
	int np=2;
	while(pow(a,np)<c)
	np++;
		//printf("%d\n",np);

	int na= (long long int)pow(a,np) % c;
	//printf("%d\n",na);
	
	int nxp=b/np;
	printf("%d\n",nxp);
	int pw=b-(nxp*np);
	
	int rm= pow(a,pw);
	printf("%d\n",rm);
	return modu(na,nxp,c)*rm % c;
	
}


int main(void)
{
	int a,b,c;
	
	scanf("%d%d%d",&a,&b,&c);
	
	int ans=modu(a,b,c);
	
	printf("%d",ans);
	
	return 0;


}
