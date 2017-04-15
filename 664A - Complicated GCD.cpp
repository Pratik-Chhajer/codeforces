#include <bits/stdc++.h>
using namespace std;

int strlen(char A[]){
	int i = 0;
	while(A[i]!='\n' && A[i]!='\0' && A[i]!=' ')
		i++;
	return i;
}

bool strcmp(char A[],char B[]){
	int m = strlen(A);
	int n = strlen(B);
	if(m!=n)
		return false;
	else{
		for(int i=0;i<n;i++)
			if(A[i]!=B[i])
				return false;
	}
	return true;
}

int main(){

	char A[1001];
	char B[1001];
	scanf("%s %s",A,B);

	if(strcmp(A,B)){
		printf("%s\n",A);
	}
	else{
		printf("1\n");
	}

	return 0;
}
