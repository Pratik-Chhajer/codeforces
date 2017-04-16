#include <bits/stdc++.h>
using namespace std;

int strlen(char A[]){
	int i = 0;
	while(A[i]!='\n' && A[i]!='\0' && A[i]!=' ')
		i++;
	return i;
}

int main(){

	char A[100001];
	scanf("%s",A);
	int n = strlen(A);
	bool done = false;
	for(int i=0;i<n-1;i++){
		if(!done && A[i]=='0'){
			done = true;
		}
		else{
			printf("%c",A[i]);
		}
	}
	
	if(done)
		printf("%c\n",A[n-1]);

	return 0;
}
