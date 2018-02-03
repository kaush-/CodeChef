#include<bits/stdc++.h>
using namespace std;

void maxSubarray(int arr[], int n, int m)
{
	int x, prefix = 0, maxim = 0, count =0;

    set<int> S;
    S.insert(0);    

    for (int i = 0; i < n; i++)
    {
	    
	prefix = (prefix + arr[i])%m;
	if (maxim == prefix){
	    count ++;
	    }
	else if (maxim < prefix){
	    maxim = prefix;
	    count = 1;
	    }
	

	auto it = S.lower_bound(prefix+1);

	if (it != S.end()){
	    if (maxim == prefix - (*it) + m){
	    count ++;
	    }
	else if (maxim < prefix - (*it) + m){
	    maxim = prefix - (*it) + m;
	    count = 1;
	    }
	    }
	

	
    }
	cout<< maxim<<" "<< count<< endl;
	return;
}

// Driver Program
int main()
{
    int T;
    cin >> T;
    while(T--){
	int n, m;
	scanf("%d%d", &n, &m);
	int arr[100005];
	for(int i=0;i<n;i++){
			scanf("%d[^ ]",&arr[i]);
	}
	for(int i=0;i<n;i++){
			printf("%d ",&arr[i]);
	}
	maxSubarray(arr, n, m);
	}
    return 0;
    
	
    
}