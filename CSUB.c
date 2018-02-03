#include<stdio.h>
#include<string.h>

int main(void){
    int T;
    scanf("%d",&T);
    while(T--){
        long long int N;
        scanf("%lld",&N);
        
        char str[100005];
        scanf("%s", str);
        
        long long int count=0;
        long long int i;    
        for(i = 0; i<N; i++)
        {
            if(str[i]=='1')
                count++;
        }
        count = (count*(count+1))/2;
        printf("%lld\n",count);
    }
    
    return 0;
	
	
}
