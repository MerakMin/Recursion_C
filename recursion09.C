#include <stdio.h>
int t(int m){
    if(m<1)
        return;
    t(m/2);
    printf("%d", m%2);
}
int main(){
    int n;
    scanf("%d", &n);
    if(n>0)
        t(n);
    else
        printf("0");
    return 0;
}