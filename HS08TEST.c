#include<stdio.h>

int main(void)
{
	int a;
	float b;
	scanf("%d %f",&a,&b);
	
	if(a%5==0 && 0.5<=b-a)
	printf("%.2f",(b-a-0.50));
	else
	printf("%.2f",b);
return 0;
}
