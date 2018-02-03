#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
 
int main(void){
	int T;
	scanf("%d",&T);
	while(T--){
		int N;
		scanf("%d",&N);
		int i,temp;
		int count =0;
		int arr[110006]={};
		
		for(i=0;i<N;i++){
			scanf("%d",&temp);
			if(arr[temp]==0)
				count++;
			arr[temp] = 1;
		}


		printf("%d\n", count);
	}
return 0;
}
