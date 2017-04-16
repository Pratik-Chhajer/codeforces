#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	scanf("%d",&n);
	char A[16];
	scanf("%s",A);
	vector<char> S;
	for(int i=0;i<n;i++){
		if(A[i]=='2' || A[i]=='3' || A[i]=='5' || A[i]=='7'){
			S.push_back(A[i]);
		}
		else if(A[i]=='4'){
			S.push_back('3');
			S.push_back('2');
			S.push_back('2');
		}
		else if(A[i]=='6'){
			S.push_back('3');
			S.push_back('5');
		}
		else if(A[i]=='8'){
			S.push_back('7');
			S.push_back('2');
			S.push_back('2');
			S.push_back('2');
		}
		else if(A[i]=='9'){
			S.push_back('2');
			S.push_back('3');
			S.push_back('3');
			S.push_back('7');
		}
	}

	sort(S.begin(),S.end());

	for(int i=S.size()-1;i>=0;i--)
		printf("%c",S[i]);
	
	return 0;
}
