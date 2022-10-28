#include<stdio.h>
int n;
int p(int a){
    if(a==1 || a==2)
        return 1;
    return p(a-2) + p(a-1);
}
int main(){
    scanf("%d", &n);
    printf("%d", p(n));
    return 0;
}