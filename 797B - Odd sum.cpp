#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	
	sort(A,A+n);

	long long int a = 0;

	for(int i=0;i<n;i++){
		if(A[i]>0)
			a += A[i];
	}

	if(a&1){
		printf("%lld\n",a);
	}
	else{
		int m = -99999;
		for(int i=0;i<n;i++){
			if(A[i]<0 && (-A[i])%2==1 && m<A[i])
				m = A[i];
		}
		int M = 99999;
		for(int i=0;i<n;i++){
			if(A[i]>0 && A[i]%2==1 && M>A[i]){
				M = A[i];
			}
		}
		m = -m;
		printf("%lld\n",a-min(m,M));
	}

	return 0;
}
