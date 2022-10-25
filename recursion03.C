#include<stdio.h>

void f(int cur, int max){
    if(cur > max)
        return;
    if(cur % 2 == 1)
        printf("%d", cur);
    f(++cur, max);
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    f(a, b);
    return 0;
}