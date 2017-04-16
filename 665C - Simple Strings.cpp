#include <bits/stdc++.h>
using namespace std;

int strlen(char A[]){
	int i = 0;
	while(A[i]!='\n' && A[i]!='\0' && A[i]!=' ')
		i++;
	return i;
}

int main(){

	char A[200001];
	scanf("%s",A);
	int n = strlen(A);

	for(int i=0;i<n-1;i++){
		if(A[i]==A[i+1]){
			if(i==n-2){
				for(int j=0;j<26;j++){
					if(j+'a'!=A[i]){
						A[i+1] = j+'a';
					}
				}
			}
			else{
				for(int j=0;j<26;j++){
					if(j+'a'!=A[i] && j+'a'!=A[i+2]){
						A[i+1] = j+'a';
					}
				}
			}
		}
	}

	printf("%s\n",A);

	
	return 0;
}
