#include<stdio.h>
void f(int n) {
	printf("%d\n", n);
	if (n == 1)
		return;
	if (n % 2 == 0)
		f(n / 2);
	else
		f(n*3 + 1);
}
int main() {
	int n;
	scanf("%d", &n);
	f(n);
}