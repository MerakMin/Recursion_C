#include <stdio.h>
int m[301]={0};
int s[301] ={0};
int mymax(int a, int b){
	return a>b? a:b;
}
int recur(int a){
	if(a<0) return 0;
	if(a==1) return m[1] = s[1];
	if(a==2) return m[2] = s[1] + s[2];
	if(m[a]!=0) return m[a];
	else return m[a] = mymax(recur(a-3)+s[a-1], recur(a-2))+s[a];
}
int main(){
	int a, b;
	scanf("%d", &a);
	for(int i=1;i<a+1;++i){
		scanf("%d", &s[i]);
	}
	printf("%d\n", recur(a));
	return 0;
}