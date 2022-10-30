#include <stdio.h>
void f(int n) {
	if (n == 1);
	else if (n % 2 == 0)
		f(n / 2);
	else
		f(n*3 + 1);
	printf("%d\n", n);
}
int main() {
	int n;
	scanf("%d", &n);
	f(n);
}