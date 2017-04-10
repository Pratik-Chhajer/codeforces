#include <bits/stdc++.h>

using namespace std;

void solve(char A[], char B[]){
	int current_x = A[0]-'a' + 1;
	int current_y = A[1] - '0';
	int destination_x = B[0] - 'a' + 1;
	int destination_y = B[1] - '0';
	printf("%d\n",max(abs(current_x - destination_x),abs(current_y - destination_y)));
	while( (current_x != destination_x) && (current_y != destination_y) ){
		if(current_x>destination_x && current_y>destination_y){
			printf("LD\n");
			current_x--;
			current_y--;
		}
		else if(current_x>destination_x && destination_y>current_y){
			printf("LU\n");
			current_x--;
			current_y++;
		}
		else if(destination_x>current_x && destination_y>current_y){
			printf("RU\n");
			current_x++;
			current_y++;
		}
		else{
			printf("RD\n");
			current_x++;
			current_y--;
		}
	}

	while(current_x<destination_x){
		printf("R\n");
		current_x++;
	}

	while(current_x>destination_x){
		printf("L\n");
		current_x--;
	}

	while(current_y<destination_y){
		printf("U\n");
		current_y++;
	}

	while(current_y>destination_y){
		printf("D\n");
		current_y--;
	}
}

int main(){

	char A[3];
	char B[3];
	scanf("%s",A);
	scanf("%s",B);
	solve(A,B);
	
	return 0;
}	
