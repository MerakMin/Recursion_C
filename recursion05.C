#include<stdio.h>
int n, sum = 1;
int p(int a)
{
    if(a<1)
        return;
    sum *= a;
    p(a-1);
}
int main()
{
    scanf("%d", &n);
    p(n);
    printf("%d", sum);
    return 0;
}