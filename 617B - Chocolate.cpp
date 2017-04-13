#include <bits/stdc++.h>
using namespace std;

void solve(int A[],int n){
    int i = 0;
    while(i<n && A[i]==0){
        i++;
    }
    int j = n-1;
    while(j>=0 && A[j]==0){
        j--;
    }
    if(i>j){
        printf("0\n");
        return;
    }
    long long int c = 1;
    int count = 0;
    while(i<=j){
        while(i<=j && A[i]==1){
            i++;
        }
        count = 0;
        while(i<=j && A[i]==0){
            count++;
            i++;
        }
        c *= (count+1);
    }
    printf("%lld",c);
}

int main(){
	int x;
	scanf("%d",&x);
	int A[x];
	for(int i=0;i<x;i++){
	    scanf("%d",&A[i]);
	}
	solve(A,x);
	return 0;
}
