#include <bits/stdc++.h>
using namespace std;

void solve(int n,int k)
{
    vector<int> P;

    while (n%2 == 0)
    {
    	P.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            P.push_back(i);
        }
        
    }
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2){
        P.push_back(n);
    }
    
    if(P.size()<k){
        printf("-1");
        return;
    }
    for(int i=0;i<k-1;i++){
        printf("%d ",P[i]);
    }
    long long int answer = 1;
    for(int i=k-1;i<P.size();i++){
        answer *= P[i];
    }
    printf("%lld",answer);
}

int main(){
	
	int n,k;
	scanf("%d %d",&n,&k);

	solve(n,k);


	return 0;
}
