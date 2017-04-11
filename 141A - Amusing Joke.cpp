#include <bits/stdc++.h>

using namespace std;

int strlen(char A[]){
	int i=0;
	while(A[i]!='\n' && A[i]!='\0')
		i++;
	return i;
}

void solve(char A[], char B[], char C[]){
	int x = strlen(A);
	int y = strlen(B);
	int z = strlen(C);
	int D[26] = {0};
	for(int i=0;i<x;i++){
		D[A[i]-'A'] += 1;
	}
	for(int i=0;i<y;i++){
		D[B[i]-'A'] += 1;
	}
	for(int i=0;i<z;i++){
		D[C[i]-'A'] -= 1;
	}
	bool result = true;
	for(int i=0;i<26;i++){
		if(D[i]!=0){
			result = false;
			break;
		}
	}
	if(result)
		printf("YES\n");
	else
		printf("NO\n");
}

int main(){

	char A[101];
	char B[101];
	char C[101];

	scanf("%s",A);
	scanf("%s",B);
	scanf("%s",C);

	solve(A,B,C);
	
	return 0;
}	
