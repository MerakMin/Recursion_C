#include<stdio.h>
void t(int a, int b)
{
    if(a==1){
        printf("*");
        return;
    }
    if(b==1){
        t(a-1,a-1);
        printf("\n");
    }
    else{
        t(a,b-1);
    }
    printf("*");
    return;
}
int main()
{
    int n;
    scanf("%d", &n);
    t(n,n);
    return 0;
}