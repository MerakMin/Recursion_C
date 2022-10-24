#include<stdio.h>

int m;
int p(int n)
{
    if(n<1)
        return;
    printf("%d\n", n);
    p(n-1);
}
int main()
{
    scanf("%d", &m);
    p(m)

    return 0;
}