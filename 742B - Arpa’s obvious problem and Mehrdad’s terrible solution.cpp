#include <bits/stdc++.h>

using namespace std;

long long int search(long long int A[],long long int i,long long int j,long long int x){
	long long int k;
	while(i<=j){
		k = (i+j)/2;
		if(A[k]==x){
			return k;
		}
		else if(A[k]>x){
			j = k-1;
		}
		else{
			i = k+1;
		}
	}
	return -1;
}

void solve(long long int A[],long long int n,long long int x){
	sort(A,A+n);
	long long int P[A[n-1]] = {0};
	long long int i = 0;
	long long int c = 0;
	while(i<n){
		c = 1;
		while(i+1<n && A[i]==A[i+1]){
			c++;
			i++;
		}
		P[A[i]] = c;
		i++;
	}

	long long int answer = 0;

	i = 0;
	while(i<n){
		long long int requires = A[i]^x;
		long long int index = search(A,0,n-1,requires);
		if(index!=-1){
		    if(x==0)
		        answer += P[A[i]]*(P[A[index]]-1);
		    else
			    answer += P[A[i]]*P[A[index]];
		}
		i += P[A[i]];
	}
	printf("%lld\n", answer/2);
}

int main(){

	long long int n,x;
	scanf("%lld %lld",&n,&x);
	long long int A[n];
	for(int i=0;i<n;i++)
		scanf("%lld",&A[i]);
	solve(A,n,x);

	return 0;
}
