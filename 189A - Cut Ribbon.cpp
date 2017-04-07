/*
    Problem : 189A Cut Ribbon
    Author : Pratik Chhajer
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int A[],int n){
    int DP[n+1];
    for(int i=1;i<=n;i++)
        DP[i] = INT_MIN;
    DP[0] = 0;
    sort(A,A+3);
    
    if(A[0]>n) return 0;
    if(A[1]>n) A[1] = A[0], A[2] = A[0];
    if(A[2]>n) A[2] = A[1];
    
    DP[A[0]] = 1;
    DP[A[1]] = 1;
    DP[A[2]] = 1;
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            if(A[j]>i) break;
            DP[i] = max(DP[i-A[j]]+1,DP[i]);
        }
    }
    
    return DP[n];
}

int main(){
    int n;
    int A[3];
    scanf("%d %d %d %d",&n,&A[0],&A[1],&A[2]);
    
    printf("%d\n",solve(A,n));
	
	return 0;
}
