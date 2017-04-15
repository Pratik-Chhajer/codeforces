#include <bits/stdc++.h>
using namespace std;

int main(){

	long long int r,g,b;
	scanf("%lld %lld %lld",&r,&g,&b);
	long long int R,G,B;
	
	R = r%3;
	G = g%3;
	B = b%3;

	vector<long long int> Answer;

	Answer.push_back(r/3 + g/3 + b/3 + min(min(R,G),B) );

	long long int x = min(min(r,g),b);

	Answer.push_back((r-x)/3 + (g-x)/3 + (b-x)/3 + x);

	if(x>=1){
		Answer.push_back((r-x+1)/3 + (g-x+1)/3 + (b-x+1)/3 + x-1);		
	}

	if(x>=2){
		Answer.push_back((r-x+2)/3 + (g-x+2)/3 + (b-x+2)/3 + x-2);	
	}

	sort(Answer.begin(),Answer.end());

	printf("%lld",Answer[Answer.size()-1]);


	return 0;
}
