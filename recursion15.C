#include <stdio.h>
int memo[51][51]={0};
int recur(int a, int b){
	if(a==1||b==1){
		return memo[a][b] = memo[b][a] = 1;
	}
	if(memo[a][b]!=0){return memo[a][b];}
	else{
		return memo[a][b] = memo[b][a] = (recur(a-1, b) + recur(a, b-1))%100000000;
	}
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", recur(a, b));
	return 0;
}