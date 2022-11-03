#include <stdio.h>
long long int m[10000001]={0};
long long int max = 0;
int l = 0;
long long int mymax(long long int a, long long int b, int c){
	if(a>b){
		l = c;
		return a;
	}
	else return b;
}
long long int recur(long long int a){
	if(a==1) return 1;
	if(a>10000000){
		if(a%2==0) return recur(a/2) + 1;
		else return recur(a*3+1) +1;
	}
	if(m[a]!=0) return m[a];
	else{
		if(a%2==0) return m[a] = recur(a/2) + 1;
		else return m[a] = recur(a*3+1) + 1;
	}
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	while(a<b+1){
		long long int temp = recur(a);
		max = mymax(temp, max, a);
		++a;
	}
	printf("%d %lld\n", l, max);
	return 0;
}