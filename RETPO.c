#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(void){
    int T;
    scanf("%d",&T);
    while(T--){
        long long x,y;
        scanf("%lld %lld", &x, &y);
        x = abs(x);
        y = abs(y);
        long long min =0;
        if(x<=y)
            min = x;
        else
            min = y;
        
        long long count=2*min;
        x = x - min;
        y = y - min;
        if(x>0)
        {
            count = count + (x / 2)*4;
            x = x % 2;
            count = count + x*3;
            
        }
        else if(y>0)
        {
            count = count + (y / 2)*4;
            y = y % 2;
            count = count + y;
            
        }
        
        printf("%lld\n",count);
    }
    
    return 0;
	
	
}
