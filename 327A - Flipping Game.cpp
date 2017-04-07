/*
    Problem : 327A Flipping Game
    Author : Pratik Chhajer
*/

#include <bits/stdc++.h>
using namespace std;

int solve(int A[],int n){
    int B[n];
    B[0] = A[0];
    for(int i=1;i<n;i++)
        B[i] = A[i] + B[i-1];
    
    int answer = B[n-1];
    int current;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==0){
                current = B[n-1] - B[j] + (j-i+1-B[j]);
            }
            else{
                current = B[n-1] - (B[j] - B[i-1])   + ( (j-i+1) - (B[j] - B[i-1]) );
            }
            answer = max(answer,current);
        }
    }
    if(answer==B[n-1]) answer--;
    return answer;
}

int main(){

    int n;
    scanf("%d",&n);

    int A[n];
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);

    printf("%d\n",solve(A,n));
	
	return 0;
}
