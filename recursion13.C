#include<stdio.h>
int S(int k, int n)
{
    int i, sum = 0;
    if(k == 0)
        return n;
    for(i=1; i<=n; i++)
    {
        sum+=S(k-1,i);
    }
    return sum;
}
int main()
{
    int k,n;
    while(scanf("%d, %d", &k, &n) != EOF)
        printf("%d\n",S(k,n));
    return 0;
}