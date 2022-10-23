#include<stdio.h>

int m;
int p(int n)
{
    if(n < 1)
        return;
    p(n-1);
    printf("%d\n", n);
;}

int main()
{
    scanf("%d", &m);
    p(m);
    return 0;
}