#include<stdio.h>
#include<stdlib.h>
#define MAX 10000000000
long long int N,dem[10002][3]={},count;
 
void kill(long long int c,long long int lim)
{
if(c>=count)
return;
if(lim>=N)
{
if(c<count)
count=c;
return;
}
long long int x=-1,y=-1,index,i;
for(i=lim;i<N;i++)
{
if(dem[i][2]>0)
{
x=dem[i][0];
y=dem[i][1];
index=i;
break;
}
}
if(x==-1 && y==-1)
{
if(c<count)
count=c;
return;
}
lim=index+1;
dem[index][2]--;
long long int rf=0,cf=0;
for(i=lim;i<N;i++)
{
if(i!=index && dem[i][0]==x)
{
dem[i][2]--;
rf=1;
}
}
if(rf==1)
{
kill(c+1,lim);
for(i=lim;i<N;i++)
{
if(i!=index && dem[i][0]==x)
dem[i][2]++;
}
}
 
for(i=lim;i<N;i++)
{
if(i!=index && dem[i][1]==y)
{
dem[i][2]--;
cf=1;
}
}
if(cf==1)
{
kill(c+1,lim);
for(i=lim;i<N;i++)
{
if(i!=index && dem[i][1]==y)
dem[i][2]++;
}
}
if(rf==0 && cf==0)
kill(c+1,lim);
dem[index][2]++;
return;
 
}
 
 
 
int main(void)
{
int T;
scanf("%d",&T);
while(T--)
{
long long int i;
scanf(" %lld",&N);
count=MAX;
 
for(i=0;i<N;i++)
{
scanf(" %lld%lld",&dem[i][0],&dem[i][1]);
dem[i][2]=1;
}
 
kill(0,0);
printf("%lld\n",count);
}
return 0;
}
