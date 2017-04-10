#include <bits/stdc++.h>

using namespace std;

void solve(vector<pair<int,int> >& P,int s,int n){
	sort(P.begin(),P.end());
	bool result = true;
	for(int i=0;i<n;i++){
		if(s<=P[i].first){
			result = false;
			break;
		}
		else{
			s += P[i].second;
		}
	}
	if(result)
		printf("YES\n");
	else
		printf("NO\n");
}

int main(){

	int s,n,a,b;
	scanf("%d %d",&s,&n);
	vector<pair<int,int> >P(n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		P[i] = make_pair(a,b);
	}
	solve(P,s,n);

	return 0;
}	
